#include <iostream>

using namespace std;
void circle()
{
    int r,ans;

    cout <<"Enter radius : ";
    cin >> r;

    ans = 3.14*r*r;

    cout << "Ans is" <<ans;

}

int main()
{
    circle();

    return 0;
}