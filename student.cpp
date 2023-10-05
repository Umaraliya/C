#include <iostream>

using namespace std;

class student
{
    private:

    int id,age;
    string name;

    public:

    student()
    {
        int id,age;
        string name;
        cin >> id >> age;
        cin >> name;
    }
    
        void getid()
        {
            cout << "Id : " << id << endl; 
        }

        void getname()
        {
            cout << "Name : " << name << endl;
        }

        void getage()
        {
            cout << "Age : " << age << endl;
        }
    
};

int main()
{
    student s1;
    int id,age;
    string name;
    cin >> id >> age;
    cin>>name ;
    
    s1.getid(id);
    s1.getname(name);
    s1.getage(age);

    return 0;
}