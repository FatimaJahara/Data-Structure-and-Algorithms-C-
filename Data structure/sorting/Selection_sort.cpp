#include<bits/stdc++.h>
using namespace std;
void Selection(int a[],int n);
int main()
{
    int n,a[100],i;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    cout<<"\nEnter the elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    Selection(a,n);
    cout<<"\nThe sorted list is : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<"  ";
    cout<<"\n";
}
void Selection(int a[],int n)
{
    int imin,i,j,temp;
    for(i=0;i<=n-2;i++)
    {
        imin=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[imin])
                imin=j;
        }
        if(imin!=i)
        {
            temp=a[i];
            a[i]=a[imin];
            a[imin]=temp;
        }
    }

}
