#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> first(3,111);
    vector<int> second(3,222);
    first.swap(second);

    cout<<"\nFirst :";
    for(i=0;i<first.size();i++)
    {
        cout<<" "<<first[i];
    }

    cout<<"\n\nSecond :";
    for(i=0;i<second.size();i++)
    {
        cout<<" "<<second[i];
    }
    cout<<"\n";

}
