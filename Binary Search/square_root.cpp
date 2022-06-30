#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    float n,sq,root,d,hi,lo,mid;
    cin>>n;
    lo=0;
    hi=n;
    while(lo<hi)
    {
        mid=(lo+hi)/2;
        sq=mid*mid;

        if(abs(sq-n)<=.00001){
            break;
        }
        else if(sq<n)
            lo=mid;
        else
            hi=mid;

    }
    cout<<"square root => "<<mid;
}
