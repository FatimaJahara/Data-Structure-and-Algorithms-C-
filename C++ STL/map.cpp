#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    map<char,int> mymap;
    mymap.insert(pair<char ,int>('a',100));
    mymap.insert(make_pair('g',200));

    map<char,int>::iterator itr=mymap.begin();
    mymap.insert(itr,make_pair('c',111)); ///insert at the beginning

    for(itr=mymap.begin();itr!=mymap.end();itr++)
        cout<<(*itr).first<<" => "<<(*itr).second<<endl;
}
