#include<iostream>
#include<set>
#include<unordered_set>
#include<iterator>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    unordered_set<string> myset={"red","green","blue"};
    unordered_set<string>::const_iterator itr=myset.find("green");
    if(itr!=myset.end())
        cout<<*itr<<"\n";

    myset.insert("yellow");

    vector<string> vec={"white","black"};

    myset.insert(vec.begin(),vec.end());
    unordered_set<string>::iterator itr1;
    cout<<"myset : ";
    for(itr1=myset.begin();itr1!=myset.end();itr1++)
        cout<<"   "<<*itr1;

    //Hash Table
    cout<<"\n\nload factor => "<<myset.load_factor()<<endl;  ///total no. of elements/total no. of buckets
    string x="purple";
    cout<<x<<" is in bucket #"<<myset.bucket(x)<<endl;
    cout<<"\nTotal bucket => "<<myset.bucket_count()<<endl;


}
