#include<iostream>
#include<map>
using namespace std;
int main()
{
    int i;
    map<int ,int > mymap;
    if(mymap.max_size()>1000)
    {
        for(i=0;i<1000;i++)
            mymap[i]=0;
        std::cout<<"The map contains 1000 elements.\n";
    }
    else
        std::cout<<"The map could not hod 1000 elements.\n";
}
