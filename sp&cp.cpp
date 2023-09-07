#include <iostream>
using namespace std;
int main()
{
    int sp, cp;
    cout<<"Enter Selling price : ";
    cin>>sp;
    cout<<"Enter Cost price : ";
    cin>>cp;
    if(sp>cp){
        cout<<"Vendor made Profit";
    }
    else if(sp<cp){
        cout<<"Vendor made Loss :)";
    }
    else{
        cout<<"No profit & loss";
    }


}