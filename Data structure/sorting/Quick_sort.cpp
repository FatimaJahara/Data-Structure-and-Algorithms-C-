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
    int pivot,pindex,i,temp;
    pivot=a[end2];
    pindex=start-1;
    for(i=start;i<=end2-1;i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i],a[pindex]);
            pindex++;
        }
    }
    swap(a[pindex+1],pivot);
    return pindex+1;
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
