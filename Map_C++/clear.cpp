#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,int> mymap;
    mymap['x']=100;
    mymap['y']=200;
    mymap['z']=300;
    for(std::map<char,int>::iterator it=mymap.begin();it!=mymap.end();it++)
        cout<<it->first<<" => "<<it->second<<endl;                              ///it->first=(x,y,z) it->second=(100,200,300)

    return 0;
}
