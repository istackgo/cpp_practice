#include <iostream>
using namespace std;
int main()
{
    // V = 4/3*pi*rr*r
    float V, pi, r;
    cout << "Enter radius of sphere : ";
    cin >> r;
    pi = 3.14;
    V = 4/3*pi*r*r;
    cout << " The vloume of sphere is " << V;
}