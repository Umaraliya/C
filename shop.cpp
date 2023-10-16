#include <iostream>

using namespace std;

class fruit
{
private:
    string name;
    int number;
    
public:
    string n = name;
    int m = number;
    int banana, apple, cherry, netbill;
    int a,b,c;

    fruit()
    {
        cout << "Customer Name is : ";
        cin >> name;

        cout << "Customer Mno. : ";
        cin >> number; 

        cout << "Banana is : ";
        cin >> banana;

        cout << "Apple is : ";
        cin >> apple;

        cout << "Cherry is : ";
        cin >> cherry;

        cout << "\nBanana prize is : \tApple prize is :\tCherry prize is : "<< endl;

        cout << "\n" << a << "\t" << b << "\t" << c;

        netbill = a + b + c;

        cout << "Netbill is : " << netbill << endl;

    }
    

    void customer()
    {
        cout << "\nCustomer Name is : " << name;
        cout << "\nCustomer Mno. :" << number; 
        cout << "\nBanana\tApple\tCherry\tTotal" << endl;
        cout << "\n" << banana << "\t" << apple << "\t" << cherry << "\t" << netbill;
    }
};

int main()
{
    fruit f1;
    int a,b,d,e,f,g,x,y,z;

    // cout << "Customer Name : ";
    // cin >> a;

    // cout << "Customer Mno. : ";
    // cin >> b;

    // cout << "Banana is : ";
    // cin >> d;

    // cout << "Banana prize is : ";
    // cin >> x;

    // cout << "Apple is : ";
    // cin >> e;

    // cout << "Apple prize is : ";
    // cin >> y;

    // cout << "cherry is : ";
    // cin >> f;

    // cout << "Cherry is : ";
    // cin >> z;

    int c = d + e + f;

    cout << "Total is : " << c << endl;

    return 0;
}