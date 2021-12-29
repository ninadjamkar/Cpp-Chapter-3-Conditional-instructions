#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter an alphabet: ";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<ch<<" is a lowercase alphabet";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<ch<<" is an uppercase alphabet";
    }
    else
    {
        cout<<ch<<" is not an alphabet";
    }
    
    return 0;
}


OUTPUT -
Enter an alphabet: D
D is an uppercase alphabet
