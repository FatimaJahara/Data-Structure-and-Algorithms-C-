#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> vec;
    for(i=1;i<=10;i++)
        vec.push_back(i);

    vec.resize(5);
    cout<<"After Resizing : ";  ///1 2 3 4 5 0 0 0 0 0
    for(i=0;i<vec.size();i++)
        cout<<" "<<vec[i];

    vec.resize(8,100);
    vec.resize(12);
    cout<<"\n\nAfter Resizing again : "; ///1 2 3 4 5 100 100 100 0 0 0 0(till 8th position there will 100)
    for(i=0;i<vec.size();i++)
        cout<<" "<<vec[i];
        cout<<"\n";
}
