#include<set>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    set<int> myset;
    myset.insert(1);
    myset.insert(3);
    myset.insert(5);

    set<int>::iterator itr;
    itr=myset.find(5);   ///no find operation

    pair<set<int>::iterator,bool> itr1;
    itr1=myset.insert(3);

    if(itr1.second==false)
        itr=itr1.first;    ///it points to element 3

    myset.insert(itr,8);  ///{1,3,7,8} and O{log(n)}=>O(n)
    myset.erase(itr);    ///{1,5,8}
    myset.erase(7);
    int i;
    set<int>::iterator it;
    for(it=myset.begin();it!=myset.end();it++)
        cout<<*it<<endl;



}
