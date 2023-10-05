#include <iostream>

using namespace std;

class akatsuki
{
public:
    akatsuki()
    {
        cout << "Hello";
    }
    ~akatsuki()
    {
        cout << ".!!" << endl;
    }
    void fun1()
    {
        cout << " Skill";
    }
    void fun2()
    {
        cout << " Qode";
    }
};

int main()
{
    akatsuki a1;

    a1.fun1();
    a1.fun2();
    return 0;
}