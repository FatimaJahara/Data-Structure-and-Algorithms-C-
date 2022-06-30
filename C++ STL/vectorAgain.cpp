#include<vector>
#include<algorithm>
#include<iterator>

#include<iostream>

using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(20);
    vec.push_back(10);
    vec.push_back(30);

    /*vector<int>::iterator itr1=vec.begin();
    vector<int>::iterator itr2=vec.end();*/
    //vector<int>::iterator itr;

    /*for(itr=itr1;itr!=itr2;itr++)
    {

        cout<<*itr<<endl;
    }
*/
    /*for(itr=vec.begin();itr!=vec.end();itr++)
    {
        cout<<*itr<<endl;
    }
    sort(vec.begin(),vec.end());
for(itr=vec.begin();itr!=vec.end();itr++)
    {
        cout<<*itr<<endl;
    }*/
    /*cout<<vec[2]<<endl; ///no range check
    cout<<vec.at(2)<<endl; ///throw range check error exception out of range
    int i;
    for(i=0;i<vec.size();i++)
    {

        cout<<vec[i]<<endl;
    }*/

    /*if(vec.empty())
    {
        cout<<"Not possible"<<endl;
    }*/

    vector<int> vec2(vec); ///copying from vec to vec2
    vector<int>::iterator itr;
    for(itr=vec2.begin();itr!=vec2.end();itr++)
    {
        cout<<*itr<<endl;
    }
    vec.clear();///clearing elements of vec

    vec2.swap(vec); ///exchanges elements between vec2 and vec


}
