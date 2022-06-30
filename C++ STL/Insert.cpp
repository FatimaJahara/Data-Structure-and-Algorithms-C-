#include<iostream>
using namespace std;
int main()
{
    int i,a[100],n,k,m;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the values: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the value to be inserted : ";
    cin>>m;
    cout<<"Enter the position: ";
    cin>>k;

    for(i=n;i>=k;i--)
    {
        a[i]=a[i-1];
    }
    a[k-1]=m;
    n++;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
