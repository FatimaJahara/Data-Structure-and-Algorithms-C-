#include<iostream>

using namespace std;

#define maxim 0x7FFFFFFF
int main()
{
   int hi,lo,mid,cnt1,cnt2,x,y,remx,remy,totalrem;
   cin>>cnt1>>cnt2>>x>>y;
   lo=1;
   hi=maxim;
   while(lo<hi)
   {
       mid=lo+(hi-lo)/2;

       remx=mid-(mid/x);  //not divisible by x
       remy=mid-(mid/y);  //not divisible by y
       totalrem=mid-(mid/(x*y));   //no. of elements not divisible by both x & y

       if(remx>=cnt1 && remy>=cnt2 && cnt1+cnt2<=totalrem)
            hi=mid;
        else
            lo=mid+1;

        cout<<"high => "<<hi<<endl;
   }
   cout<<hi<<endl;
}
