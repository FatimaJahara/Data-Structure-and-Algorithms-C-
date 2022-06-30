#include<list>
#include<iterator>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    list<int> mylist={2,3,7};
    mylist.push_back(6);
    mylist.push_front(4);

    list<int>::iterator itr=find(mylist.begin(),mylist.end(),2);
    mylist.insert(itr,100);
    list<int>::iterator itr1;

    for(itr1=mylist.begin();itr1!=mylist.end();itr1++)
    {
        cout<<*itr1<<endl;
    }

    list<int>::iterator itr2=find(mylist.begin(),mylist.end(),6);
   mylist.erase(itr2);
    cout<<"After deleting 6 :\n";
    for(itr1=mylist.begin();itr1!=mylist.end();itr1++)
    {
        cout<<*itr1<<endl;
    }

    list<int> mylist1={100,200,300};

    list<int>::iterator itr3=find(mylist1.begin(),mylist1.end(),200);
    list<int>::iterator itr4=find(mylist.begin(),mylist.end(),7);


    mylist1.splice(itr3,mylist,itr,itr4); ///it will insert 2-7 from mylist before 200 in mylist1

    cout<<"mylist1 after splicing from mylist :\n";

    for(itr1=mylist1.begin();itr1!=mylist1.end();itr1++)
    {
        cout<<*itr1<<endl;
    }


}
