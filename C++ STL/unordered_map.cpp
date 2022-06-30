#include<iostream>

#include<unordered_map>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    unordered_map<char,string> day={{'S',"Sunday"},{'M',"Monday"}};

    cout<<day['S']<<endl;
    cout<<day.at('S')<<endl; ///range check

    day['W']="Wednesday";  ///inserted

    day['M']="MONDAY";  ///modified

    unordered_map<char,string>::iterator itr;
    for(itr=day.begin();itr!=day.end();itr++)
        cout<<(*itr).first<<" => "<<(*itr).second<<endl;

}
