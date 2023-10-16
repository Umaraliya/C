#include <iostream>

using namespace std;

class cust
{
private:
    int name;
    string number;
public:
    string value1, value2, value3, c_name;
    int c_number, cgst, sgst, quntity, c_total; 

    cust()
    {
        int c_name = name;
        string c_number = number;

        cout << "";

    }
    ~cust()
    {
        cout << "Thanks For Visit..." << endl;
    }
};


int main()
{
    string v1, v2, v3,name;
    int number, cgst, sgst, qty, total;

    cout << "************************************************\n";
    cout << "Croma shop\n";
    cout << "************************************************\n";

    cout << "Customer Name : ";
    cin >> name;

    cout << "Customer Number : ";
    cin >> number;
    
    return 0;
}
