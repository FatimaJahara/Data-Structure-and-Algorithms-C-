#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;
int main()
{
    int i,t,n;
    cin>>t;
    vector<int> vec;
    for(i=0;i<t;i++)
    {
        cin>>n;
        vec.push_back(n);
    }
    sort(vec.begin(),vec.end());

    for(i=0;i<vec.size();i++)
        cout<<vec[i]<<endl;

}
