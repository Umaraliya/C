#include <iostream>

using namespace std;

class student
{
private:
    int mark1, mark2, mark3;

public:

    int sci, guj, eng, total;
    string name;

    student()
    {
        cout << "Studenty Name : ";
        cin >> name ;

        cout << "Science Marks : ";
        cin >> sci;

        cout << "Gujrati Marks : ";
        cin >> guj;

        cout << "English Marks : ";
        cin >> eng;

        total = sci + guj + eng;
    
    }
    
    ~student()
    {
        cout << "\nStudent " << name << " object is being destructed"; 
    }

    void std()
    {
        cout << "\nStudent Name : " << name << endl;

        cout << "\nsci\tguj\teng\ttotal";

        cout << "\n" << sci << "\t" << guj << "\t" << eng << "\t" << total;
    }

};

int main()
{
    student s1,s2,s3;

    s1.std();
    s2.std();
    s3.std();

    return 0;
}