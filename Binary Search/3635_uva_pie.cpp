#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int test,n,f,i,k,j,r_in;

    float maxa,v_in,pi;
    pi=acos(-1.0);
    vector<float> v;
    cin>>test;
    for(k=1;k<=test;k++)
    {
        cin>>n>>f;
        maxa=-1;
    for(i=0;i<n;i++)
    {
        cin>>r_in;

        v_in=pi*r_in*r_in;
        v.push_back(v_in);
        maxa=max(maxa,v[i]);

    }

    float lo,hi,mid;
    float dif;
    lo=0;
    hi=maxa;
    int sum;

    while(hi-lo>1e-5)
    {
        mid=(lo+hi)/2.0;
           // cout<<mid<<"\n";

        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+floor(v[i]/mid);
        }
        if(sum>=f+1)
            lo=mid;
        else
            hi=mid;

    }
    cout<<lo<<"\n";

    }
}
