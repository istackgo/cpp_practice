#include <iostream>
using namespace std;
int main()
{
    // Formula for Simple Interest : SI = P × R × T
    float SI, P, R, T;
    cout << "Enter a Principle :";
    cin >> P;
    cout << "Enter a Rtae : ";
    cin >> R;
    cout << "Enter a Time : ";
    cin >> T;
    SI = P*R*T;
    cout << "Simple Interest is " << SI;
    }