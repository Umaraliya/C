#include <iostream>

using namespace std;
void sub()
{
    int maths,sci,eng,total,per;

    cout <<"Enter maths mark";
    cin >>maths;

    cout <<"Enter sci mark";
    cin >>sci;

    cout <<"Enter eng mark";
    cin >>eng;

    total=maths+sci+eng;

    per = (total * 100)/300;

    cout << "Total: " << total << endl;
    cout << "per: " << per;

}

int main()
{
    sub();

    return 0;
}