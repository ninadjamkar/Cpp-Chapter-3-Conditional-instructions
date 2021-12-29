#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter four numbers: "<<endl;
    cin>>a>>b>>c>>d;
    cout<<""<<endl;
    
    if(a>b && a>c && a>d)
    {
        cout<<a<<" is the greatest number"<<endl;
    }
    else if(b>a && b>c && b>d)
    {
        cout<<b<<" is the greatest number"<<endl;
    }
    else if(c>a && c>b && c>d)
    {
        cout<<c<<" is the greatest number"<<endl;
    }
    else
    {
        cout<<d<<"is the greatest number"<<endl;
    }
    
    return 0;
}


OUTPUT -
Enter four numbers: 
89
98
95
94

98 is the greatest number
