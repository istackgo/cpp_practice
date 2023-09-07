#include <iostream>
using namespace std;
int main()
{
    int l,b, area, peri;
    cout<<"Enter a length of rectangle : ";
    cin >> l;
    cout<<"Enter a breadth of rectangle : ";
    cin >> b;
    area = l*b;
    peri = 2/l+b;
    if( area> peri){
        cout<<"Area is greater then perimeter !";
    }
    else{
        cout<<"Area is less then perimeter !";
    }



}