#include <iostream>
using namespace std;
typedef unsigned long long int byte;

int main()
{
    byte n;
    cin>>n;
    byte a=0,b=1;
    byte c;
    if(n==1) 
    cout<<a<<endl;
    else if(n==2)
    cout<<b<<endl;
    else{
        for(byte i=1;i<=(n-2);i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        cout<<c<<endl;
    }
    return 0;
}