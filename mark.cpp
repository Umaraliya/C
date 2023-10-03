#include <iostream>

using namespace std;

class student{

private:

    int maths;
    int science;
    int english;
    int gujrati;
    int total;

public:

    int m = maths;
    int s = science;
    int e = english;
    int g = gujrati;
    int t = total;

void std(int m, int s, int e, int g)
{
    t = m + s + e + g;

    cout << "total : " << t << endl;
}

};

int main()
{
    student s1[2];
    int a[2], b[2], c[2], d[2];

    for(int i = 0;i < 2; i++)
    {
    cout << "maths : ";
    cin >> a[i];

    cout << "science : ";
    cin >> b[i];

    cout << "english : ";
    cin >> c[i];

    cout << "gujrati : ";
    cin >> d[i];
    
    for(int i = 0; i < 2; i++)
    {
        s1[i].std(a[i] ,b[i] ,c[i] ,d[i]);
    }

    return 0;
}