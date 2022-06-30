#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> vec;
    for(i=1;i<=10;i++)
        vec.push_back(i);
    cout<<"size : "<<(int) vec.size()<<endl;
    cout<<"capacity : "<<(int) vec.capacity()<<endl;
    cout<<"max_size : "<<(int) vec.max_size()<<endl;

}
