#include<bits/stdc++.h>
using namespace std;
int main()
{
    const long double esp=1e-10;
    int i,n,l[100005],a,j,ma,k,re,p;
    while(cin>>n>>a){

    p=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
        p=p+l[i];
    }
    if(p==a || a==0)
        printf(":D\n");
    else if(a>p)
        printf("-.-\n");
    else
    {
        sort(l,l+n);
        ma=l[n-1];

    for(j=1;j<ma;j++)
    {
        re=0;
        for(k=n-1;k<0;k--)
        {
            if(l[k]>j)
                p=l[k]-j;
            else{
                p=0;
                break;
            }
                re=re+p;
        }
        if(re==a){
            printf("%I64\n",j+esp);
            break;
        }
        /*if(j+1==ma)
            printf("-.-\n");*/
    }
    }
     }
}
