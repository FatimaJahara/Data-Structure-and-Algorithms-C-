#include<vector>
#include<iterator>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> vec;

    cout<<"Size of the vector : "<<vec.size()<<endl;
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(9);
    vec.push_back(6);

    vector<int>::iterator itr;///using iterator
    for(itr=vec.begin();itr!=vec.end();itr++)
        cout<<*itr<<" ";

    vector<int> vec2(vec);///copying from vec to vec2
    vector<int>::iterator itr1;
    cout<<"\n\ncontents of vect 2 : ";
    for(itr1=vec2.begin();itr1!=vec2.end();itr1++)
        cout<<*itr1<<" ";


    cout<<"\nSize of the vector2 : "<<vec2.size()<<endl;

    vector<int> vec3;
    vec3.swap(vec2);///swapping from vec2 to vec3
    cout<<"\n\nAfter swapping size of the vector2 : "<<vec.size()<<endl;
    cout<<"\nSize of the vector3(swapped) : "<<vec.size()<<endl;
    vector<int>::iterator itr3;
    for(itr3=vec3.begin();itr3!=vec3.end();itr3++)
        cout<<*itr3<<" ";
    vec.clear();///clear all data of vec

    if(vec.empty())
        cout<<"\nNot Possible"<<endl;///check whether empty or not



}
