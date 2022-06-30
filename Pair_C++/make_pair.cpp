#include<utility>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    pair <int ,int > foo;
    pair<int ,int > bar;
    foo=make_pair(10,20);
    bar=make_pair(10.5,'A');   ///implicit conversion from pair <double,char>

    cout<<"foo : "<<foo.first<<" , "<<foo.second<<"\n\n";
    cout<<"bar : "<<bar.first<<" , "<<bar.second<<"\n\n";   ///10.5->10 , A->65

    foo.swap(bar);
    cout<<"After swapping : \n\n";
    cout<<"foo : "<<foo.first<<" , "<<foo.second<<"\n\n";
    cout<<"bar : "<<bar.first<<" , "<<bar.second<<"\n\n";

}
