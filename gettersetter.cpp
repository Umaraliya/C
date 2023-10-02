#include <iostream>

using namespace std;

class person{

private:

    int age;
    string name, city;

public:

void setname(string n)
{
    name = n;
}

void setcity(string c)
{
    city = c;
}

void setage(int a)
{
    age = a;
}

void getname()
{
    cout << "Name : " << name << endl;
}

void getcity()
{
    cout << "City : " << city << endl;
}

void getage()
{
    cout << "Age : " << age << endl; 
}

};

int main()
{
    person p1;
    int z;
    string x, y;

    cout << "personname";
    cin >> x;

    cout << "personcity";
    cin >> y;

    cout << "personage";
    cin >> z;

    p1.setname(x);
    p1.setcity(y);
    p1.setage(z);

    p1.getname();
    p1.getcity();
    p1.getage();

    return 0;
}