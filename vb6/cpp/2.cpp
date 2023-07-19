#include <iostream>
using namespace std;

class example
{
public:
    example(int n)
    {
        i = n;
        cout<<"constructing\n";
    }
    ~example()
    {
        cout << "Destructing\n";
    }
    int get_i()
    {
        return i;
    }

};

int main()
{

    return 0;
}