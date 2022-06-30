#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int searchlowerbound(vector<int> v,int target)
{
    int hi,lo,mid,index,l;
    l=v.size();
    lo=0;
    hi=l-1;
    while(lo<=hi)
    {
        mid=lo+(hi-lo)/2;
        if((v[mid]>=target && v[mid-1]<target)
        {
            index=mid;
            break;

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
    vector<int> vec={500,200,300,300,100,200,100,400,200};
    int l,low,i,insert_ele;

    sort(vec.begin(),vec.end());
    for(i=0;i<vec.size();i++)
        cout<<vec[i]<<"   ";
    cout<<"\n\nInsert Element : ";
    cin>>insert_ele;

    low=searchlowerbound(vec,insert_ele);
    l=vec.size();
    for(i=l-1;i>=low;i--)
    {
        swap(vec[i+1],vec[i]);
    }
    vec[low]=insert_ele;
    cout<<"\n\nAfter inserting "<<insert_ele<<" in position "<<low<<" : \n";
    for(i=0;i<vec.size()+1;i++)
        cout<<vec[i]<<"   ";

    cout<<"\n\n";
    return 0;
}
