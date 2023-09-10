#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a percentage of student : ";
    cin>>num;
    if(num<=100){
        cout<<"First Division";
    }
    else if(num<=40){
        cout<<"Second Division";
    }
    else if(num<=15){
        cout<<"Third Divison";
    }
}