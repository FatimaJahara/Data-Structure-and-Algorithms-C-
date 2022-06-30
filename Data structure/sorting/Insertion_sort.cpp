#include<bits/stdc++.h>
using namespace std;
void Insertion(int a[],int n);
int main()
{
    int n,a[100],i;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    cout<<"\nEnter the elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];
    Insertion(a,n);
    cout<<"\nThe sorted list is : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<"  ";
    cout<<"\n";
}
void Insertion(int a[],int n)
{
    int value,temp,hole,i,j;
    for(i=1;i<n;i++)
    {
        value=a[i];
        hole=i;
        while(hole>0 && a[hole-1]>value)
        {
            temp=a[hole-1];
            a[hole-1]=a[hole];
            a[hole]=temp;
            hole=hole-1;
        }
    }

}

