#include<deque>
#include<iterator>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int i;

    deque<int> deq={4,5,8};
    deq.push_front(2);  ///{2,4,5,8}
    deq.push_back(9);   ///{2,4,5,8,9}
    for(i=0;i<deq.size();i++)
    cout<<deq[i]<<endl;
}
