#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<char,std::string> mymap;

    mymap['a']="an element 1";
    mymap['b']="an element 2";
    mymap['x']="an element 3";

    cout<<"mymap [a] => "<<mymap['a']<<endl;
    cout<<"mymap [b] => "<<mymap['b']<<endl;
    cout<<"mymap [x] => "<<mymap['x']<<endl;
}
