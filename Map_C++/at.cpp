#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> mymap={{"alpha",0},{"beta",0},{"gama",0}};
    for(auto x: mymap)
        cout<<x.first<<" : "<<x.second<<endl;
    mymap["alpha"]=10;
    mymap["beta"]=20;
    mymap["gama"]=30;
    cout<<"\n\nAfter initializing again : \n";
    for(auto x: mymap)
        cout<<x.first<<" : "<<x.second<<endl;

    cout<<"\n\nUsing erase : \n";
    while(!mymap.empty())
    {
        std::cout<<mymap.begin()->first<<" => "<<mymap.begin()->second <<endl;
        mymap.erase(mymap.begin());
    }
}
