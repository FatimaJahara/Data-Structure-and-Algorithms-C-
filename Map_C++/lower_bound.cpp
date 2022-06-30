#include<iostream>
#include<map>
using namespace std;
int main()
{
    int i;
    map<char ,int > mymap;

    mymap['a']=50;
    mymap['b']=100;
    mymap['c']=150;
    mymap['d']=200;
    mymap['e']=250;

    std::map<char,int>::iterator itlow,itup;
    itlow=mymap.lower_bound('b');             ///itlow points to b
    itup=mymap.upper_bound('d');              ///itup points to e(!d)

    mymap.erase(itlow,itup);

    for(auto x: mymap)
        cout<<x.first<<" => "<<x.second<<endl;


}
