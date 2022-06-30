#include<bits/stdc++.h>
using namespace std;
int main()
{
    int W,f_w,n,w[100],b[100],i,j;
    float v[100];
    cout<<"Maximum Weight : ";
    cin>>W;
    cout<<"\nno. of items : ";
    cin>>n;
    for(i=0;i<n;i++){
    cout<<"\n"<<i<<". ";
    cout<<"Weight : ";
    cin>>w[i];
    cout<<"Benefit : ";
    cin>>b[i];
    v[i]=b[i]/w[i];
    }
    int imax,temp,a,t_b;
    for(i=0;i<=n-2;i++)
    {
        imax=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(v[j]>v[imax])
                imax=j;
        }
        if(imax!=i)
        {
           swap(v[imax],v[i]);
           swap(w[imax],w[i]);
           swap(b[imax],b[i]);
        }
    }
    f_w=0;
    t_b=0;
    while(f_w<W)
    {
        for(i=0;i<n;i++)
        {
            a=min(w[i],W-f_w);
            t_b=t_b+a*v[i];
            f_w=f_w+a;
        }
    }
    cout<<"total Weight : "<<f_w<<endl;
    cout<<"Total benefit : "<<t_b<<endl;



}
