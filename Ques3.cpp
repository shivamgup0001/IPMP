#include<iostream>
typedef unsigned long long int byte;
using namespace std;
int main()
{
    byte n;
    cin>>n;
    int f=0;
    byte arr[n];
    for(byte i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(byte i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){
            cout<<arr[i];
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<arr[n-1];
    }
    return 0;
}