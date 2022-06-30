#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int i;
  /*1.*/  vector<int> myvec(3,100);
        cout<<"\n\nVector 1 :";
    for(i=0;i<myvec.size();i++)
        cout<<" "<<myvec[i];


/*2*/
    vector<int>::iterator it;
    it=myvec.begin();
    it=myvec.insert(it,200);
    cout<<"\n\nVector 2 :";
    for(i=0;i<myvec.size();i++)
        cout<<" "<<myvec[i];



/*3*/
    myvec.insert(it,2,300);
    cout<<"\n\nVector 3 :";
    for(i=0;i<myvec.size();i++)
        cout<<" "<<myvec[i];


    ///it not valid anymore

/*4*/
    it=myvec.begin();
    vector<int> anothervec(2,400);
    myvec.insert(it+2,anothervec.begin(),anothervec.end());
    cout<<"\n\nVector 4 :";
    for(i=0;i<myvec.size();i++)
        cout<<" "<<myvec[i];

/*5*/
    int myarray[]={501,502,503};
    myvec.insert(myvec.begin(),myarray,myarray+3);

    cout<<"\n\nmy vector contains :";
    for(it=myvec.begin();it<myvec.end();it++)
        cout<<" "<<*it;
    cout<<"\n";

    return 0;
}
