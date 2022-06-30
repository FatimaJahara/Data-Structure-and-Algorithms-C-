/*
    Assigns new contents to the vector,
    replacing its current contents ,
    and modifying its size accordingly
*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> first,second,third;
    first.assign(7,100);                 ///7 ints with a value 100
    for(i=0;i<first.size();i++)
        cout<<"First : "<<first[i]<<endl;

    vector<int>::iterator it;
    it=first.begin()+1;
    second.assign(it,first.end()-1);    ///5 central values of first
        for(i=0;i<second.size();i++)
        cout<<"Second : "<<second[i]<<endl;

    int m[]={1,2,3};
    third.assign(m,m+3);                ///assigning from arrays
        for(i=0;i<third.size();i++)
        cout<<"Third : "<<third[i]<<endl;

    cout<<"\n\nSize of first : "<<int(first.size())<<endl;
    cout<<"\n\nSize of second : "<<int(second.size())<<endl;
    cout<<"\n\nSize of third : "<<int(third.size())<<endl;
}
