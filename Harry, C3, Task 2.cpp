#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float p;
    float c;
    float m;
    float percentage;
    cout<<"Enter your Mathematics score: ";
    cin>>m;
    cout<<"Enter your Physics score: ";
    cin>>p;
    cout<<"Enter your Chemistry score: ";
    cin>>c;
    
    percentage=(p+c+m)/3;
    cout<<""<<endl;
    cout<<"Percentage: "<<percentage<<endl;
    cout<<""<<endl;
    
    if((percentage<40) || p<33 || c<33 || m<33)
    {
        cout<<"You failed the exam"<<endl;
    }
    else
    {
        cout<<"You passed the exam"<<endl;
    }
    
    return 0;
}


OUTPUT -
Enter your Mathematics score: 30
Enter your Physics score: 52
Enter your Chemistry score: 69

Percentage: 50.3333

You failed the exam

