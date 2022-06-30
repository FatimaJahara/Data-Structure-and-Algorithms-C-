#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    vector<int> v1,v2,v3;
    v1.push_back(1);
    v1.push_back(2);

    v2=v1; ///coping v1 to v2
    for(i=0;i<v2.size();i++)
    {

        printf("%d\n",v2[i]);
    }
    if(v1==v2)
        printf("Yes\n");
    else
        printf("No\n");

    v2.push_back(5);
        if(v1==v2)
        printf("Yes\n");
    else
        printf("No\n");

}
