
#include <iostream>
using namespace std;
class Magic
{
public:
    void getdata();
    void getfirstmafic();
    void generatemagic();
    void printmagic();

private:
    int m[4][4];
    int step;
    int first;
    int sum;
};

void Magic::getdata()
{
    cin >> first >> step >> sum;
}

void Magic::getfirstmafic()
{
    int a, b;
    a = first;
    b = step;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            m[i][j] = a;
            a += b;
        }
    }
}

void Magic::generatemagic()
{
    for (int i = 0; i < 4; i++)
    {
        m[i][i] = sum - m[i][i];
        m[i][3 - i] = sum - m[i][3 - i];
    }
}

void Magic::printmagic()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << m[i][j] << ends;
        }
        cout << endl;
    }
}

int main()
{
    Magic magic;
    magic.getdata(); //调用成员函数;
    magic.getfirstmafic();
    magic.generatemagic();
    magic.printmagic();
    return 0;
}