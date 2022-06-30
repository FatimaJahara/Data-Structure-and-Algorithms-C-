#include<iostream>
#include<map>
using namespace std;
int main()
{
    char c;
    map<char ,int > mymap;

    mymap['a']=50;
    mymap['c']=100;
    mymap['f']=150;
    mymap['g']=200;

    for(c='a';c<'h';c++)
    {
        std::cout<<c;
        if(mymap.count(c)>0)
            std::cout<<"is an element of mymap.\n\n";
        else
            std::cout<<"is not an element of mymap.\n\n";

    }
}
