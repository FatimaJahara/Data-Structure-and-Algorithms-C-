#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i,temp;
    vector<int> myvec(10); ///10 elements
    vector<int>:: size_type sz=myvec.size(); ///sz=10

    for(i=0;i<sz;i++)
        myvec[i]=i;

    cout<<"\nmyvec contains :";
    for(i=0;i<sz;i++)
        cout<<" "<<myvec[i];
    cout<<"\n";


///reverse vector using operator[]
    for(i=0;i<sz/2;i++)
    {
        temp=myvec[sz-1-i];
        myvec[sz-1-i]=myvec[i];
        myvec[i]=temp;
    }

    cout<<"\nReversed myvec contains :";
    for(i=0;i<sz;i++)
        cout<<" "<<myvec[i];
    cout<<"\n";

    return 0;
}
