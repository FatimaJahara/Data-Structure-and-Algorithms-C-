#include<iostream>
#include<algorithm>

using namespace std;
int b_search(vector<int> v,int ele)
{
    int target,hi,lo,mid,index;
    cin>>target;
    lo=0;
    hi=ele-1;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if(v[mid]==target)
        {
            index=mid;
            hi=mid-1;

        }
        else if(v[mid]<target)
            lo=mid+1;
        else
            hi=mid-1;
    }
    return index;

}

int main()
{
    vector<int> vec={500,200,300,100,200,100,400,200};
    int l,low;
    l=vec.size();
    sort(vec.begin(),vec.end());
    low=b_search(vec,l);
    cout<<"lower index => "<<low<<endl;


}
