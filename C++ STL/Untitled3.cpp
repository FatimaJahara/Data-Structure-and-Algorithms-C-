#include<bits/stdc++.h>
using namespace std;
const long double esp=1e-10;
int cmp(long double a, long double b = 0, long double t = esp){
    return( a <= b + t) ? (a + t < b) ? -1 : 0 : 1;
}
int main()
{

    int i,n,l[100005],a,j,ma,k,re,p;
    while(cin>>n>>a){

    p=0;



    for (auto &i : l){ cin >> i;
            p=p+i;
    }

    if(p==a || a==0)
        printf(":D\n");
    else if(a>p)
        printf("-.-\n");
    else
    {
        sort(l,l+n);
long double lo = 0, hi = l[0];
      while (cmp(lo, hi) == -1) {
        long double m = (lo + hi) * 0.5;
        long double cur = 0;
        for (auto &i : l)
          if (i > m) cur =cur+ i - m;
          else break;

        if (cmp(a, cur) == 0) {
          lo = m;
          break;
        }
        if (cmp(cur, a) == 1)
          lo = m;
        else
          hi = m;
      }
      cout << lo + esp << endl;

    }
     }
     return 0;
}
