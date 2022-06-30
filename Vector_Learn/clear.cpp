#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> myvec;
    myvec.push_back(100);
    myvec.push_back(200);
    myvec.push_back(300);

    cout<<"My Vector contains :";
    for(i=0;i<myvec.size();i++)
        cout<<" "<<myvec[i];

    myvec.clear();
    myvec.push_back(1101);
    myvec.push_back(2202);

    cout<<"\n\nMy Vector contains :";
    for(i=0;i<myvec.size();i++)
        cout<<" "<<myvec[i];

    cout<<"\n";

    return 0;
}
