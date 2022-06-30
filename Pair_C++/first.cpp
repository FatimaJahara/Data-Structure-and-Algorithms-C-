#include<utility>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    pair<string,double> p1;
    pair<string,double> p2("Tomato",25.90);
    pair<string,double> p3(p2);     ///copy constructor
    pair<string,double> p4;

    p1=make_pair(string("lights"),0.99); ///using make_pair(move)
    p4.first="shoes";               //the type of first is string
    p4.second=5.55;                 //the type of second is double

    p2.first="caps";
    p2.second=10.99;

    cout<<"The prie of "<<p1.first<<" is $"<<p1.second;
    cout<<"\n\nThe prie of "<<p2.first<<" is $"<<p2.second;
    cout<<"\n\nThe prie of "<<p3.first<<" is $"<<p3.second;
    cout<<"\n\nThe prie of "<<p4.first<<" is $"<<p4.second<<"\n\n";
}
