#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cout<<"Enter time in 24 hour system: ";
    cin>>t;
    if(t>=4 && t<=11)
    {
        cout<<"Good morning"<<endl;
    }
    else if(t>=12 && t<=17)
    {
        cout<<"Good afternoon"<<endl;
    }
    else
    {
        cout<<"Good night"<<endl;
    }
    
    return 0;
}


OUTPUT -
Enter time in 24 hour system: 20
Good night
