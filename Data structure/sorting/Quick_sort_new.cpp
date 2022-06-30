#include<bits/stdc++.h>
using namespace std;
int Partition(int a[],int start,int end2);
void Quicksort(int a[],int start,int end2);
int main()
{
    int n,a[100],i,d;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    cout<<"\nEnter the elements : ";
    for(i=0;i<n;i++)
        cin>>a[i];

    Quicksort(a,0,n-1);
    cout<<"\nThe sorted list is : ";
    for(i=0;i<n;i++)
        cout<<a[i]<<"  ";
    cout<<"\n";
}
int Partition(int a[],int start,int end2)
{
    int loc,temp;
    loc=start;
    while(1)
    {
    while(a[loc]<=a[end2] && loc!=end2)
        end2--;
    if(loc==end2)
        return loc;
    temp=a[loc];
    a[loc]=a[end2];
    a[end2]=temp;

    loc=end2;
    while(a[loc]>=a[start] && loc!=start)
        start++;
    if(loc==start)
        return loc;
    temp=a[loc];
    a[loc]=a[start];
    a[start]=temp;

    loc=start;
    }

}
void Quicksort(int a[],int start,int end2)
{
    if(start<end2)
    {
    int pindex=Partition(a,start,end2);
    Quicksort(a,start,pindex-1);
    Quicksort(a,pindex+1,end2);
    }
}

