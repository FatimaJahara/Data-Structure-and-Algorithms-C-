#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> myvec;
    myvec.push_back(10);

    while(myvec.back()!=0)
    {
        myvec.push_back(myvec.back()-1);
    }

    cout<<"\nmyvector contains : ";
    for(i=0;i<myvec.size();i++)
    {
        cout<<" "<<myvec[i];
    }
    cout<<endl;
}
