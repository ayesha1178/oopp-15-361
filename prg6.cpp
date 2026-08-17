#include <bits/stdc++.h>
using namespace std;

class Demo
{
private:
    int value;

public:
    Demo()
    {
        value = 0;
        cout << "Default Constructor Called" << endl;
    }

    Demo(int v)
    {
        value = v;
        cout << "Parameterized Constructor Called" << endl;
    }
 
    Demo(const Demo &obj)
    {
        value = obj.value;
        cout << "Copy Constructor Called" << endl;
    }

    ~Demo()
    {
        cout << "Destructor Called for value = " << value << endl;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Demo obj1;
    obj1.display();

    Demo obj2(100);
    obj2.display();

    Demo obj3 = obj2;
    obj3.display();

    return 0;
}