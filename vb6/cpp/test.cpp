#include <iostream>
using namespace std;

class A
{
public:
    void set(int i, int j)
    {
        x = i;
        y = j;
    }

    int get_y()
    {
        return y;
    }

private:
    int x, y;
};

class box
{

public:
    void set(int l, int w, int s, int p)
    {
        length = l;
        width = w;
        label.set(s, p);
    }

    int get_area()
    {
        return length * width;
    }

private:
    int length, width;
    A label;
};

int main()
{
    box b;
    b.set(4, 6, 1, 20);
    cout << b.get_area() << endl;
    return 0;
}