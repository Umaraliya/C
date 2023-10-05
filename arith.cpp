#include <iostream>

using namespace std;

class arith{

    private:

    int a = 10, b = 20;

    public:

    arith()
    {
        int a = 10, b = 20;

        cout << a + b << endl;
        cout << b;
    }
};

int main()
{
    arith a;

    return 0;
}