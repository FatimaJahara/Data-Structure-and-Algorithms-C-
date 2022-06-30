#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> myvec(10);
    for(i=0;i<myvec.size();i++)
    {
        myvec.at(i)=i;
    }

    cout<<"my vector contains : ";
    for(i=0;i<myvec.size();i++)
    {
        cout<<" "<<myvec.at(i);
    }
    cout<<"\n";

}
