#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> myvec;
    myvec.push_back(78);
    myvec.push_back(16);
    cout<<" myvec.front is : "<<myvec.front()<<endl;
    myvec.front()=myvec.back();
    cout<<" myvec.front is now : "<<myvec.front()<<endl;


}
