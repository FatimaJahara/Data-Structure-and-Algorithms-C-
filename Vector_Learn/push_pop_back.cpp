#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int i,mynum,sum;
    vector<int> vec;

    cout<<"Please enter some numbers : "<<endl;
    do
    {
        cin>>mynum;
        vec.push_back(mynum);
    }while(mynum);                          //this loop will break when we enter 0

        cout<<"\n\nSize of Vector : "<<int(vec.size())<<endl;   ///including 0
        for(i=0;i<vec.size();i++)
            cout<<vec[i]<<endl;
        sum=0;
        while(!vec.empty())
        {
            sum+=vec.back();
            cout<<"sum = "<<sum<<endl;
            vec.pop_back();
        }
        cout<<" the elements of vec add up to "<<sum<<endl;


         cout<<"\n\nAfter pop_back() , Size of Vector : "<<int(vec.size())<<endl;


}
