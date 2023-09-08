#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout<<"Enter a no of ROWS : ";
    cin>>r;
    cout<<"Enter a no of COLUMNS : ";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}