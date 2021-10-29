#include<iostream>
typedef unsigned long long int byte;
using namespace std;
int main()
{
    byte n;
    cin>>n;
    for(byte i=1;i<=n;i++)
    {
        for(byte k=n;k>i;k--)
        cout<<"  ";
        for(byte j=1;j<=(2*i-1);j++)
        cout<<"*"<<" ";
        cout<<"\n";
    }
    for(byte i=1;i<n;i++)
    {
        for(byte k=1;k<=i;k++)
        cout<<"  ";
        for(byte k=(2*(n-i)-1);k>=1;k--)
        cout<<"*"<<" ";
        cout<<endl;
    }
    return 0;
}