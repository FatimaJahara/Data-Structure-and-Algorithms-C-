#include<iostream>
#include<map>
using namespace std;
int main()
{
    int i;
    map<char ,int > mymap;
    std::map<char,int>::iterator it;

    mymap['a']=50;
    mymap['b']=100;
    mymap['c']=150;
    mymap['d']=200;

    it=mymap.find('b');
    mymap.erase(it);

    mymap.erase(mymap.find('d'));

    for(auto x: mymap)
        cout<<x.first<<" => "<<x.second<<endl;
}
