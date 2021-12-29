#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int income;
    float IT;
    cout<<"Enter your income: ";
    cin>>income;
    
    if(income<250000)
    {
        cout<<"0% income tax"<<endl;
    }
    else if(income>=250000 && income<=500000)
    {
        cout<<"5% income tax"<<endl;
        IT=income*0.05;
        cout<<"Income tax: "<<IT<<endl;
    }
    else if(income>500000 && income<=1000000)
    {
        cout<<"20% income tax"<<endl;
        IT=income*0.2;
        cout<<"Income tax: "<<IT<<endl;
    }
    else
    {
        cout<<"30% income tax"<<endl;
        IT=income*0.3;
        cout<<"Income tax: "<<IT<<endl;
    }
    
    return 0;
}


OUTPUT -
Enter your income: 360000
5% income tax
Income tax: 18000

