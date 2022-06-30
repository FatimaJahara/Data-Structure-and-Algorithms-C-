#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int b_search(vector<int> v,int target)
{
    int hi,lo,mid,index;
    int l=v.size();
    lo=0;
    hi=l-1;
    index=-1;
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
    int l,low,target;
    l=vec.size();
    sort(vec.begin(),vec.end());
    cout<<"Insert the searching element: ";
    cin>>target;
    low=b_search(vec,target);
    if(low!=-1)
    cout<<"lower index => "<<low<<endl;
    else
        cout<<"Index not found.\n\n";


}
