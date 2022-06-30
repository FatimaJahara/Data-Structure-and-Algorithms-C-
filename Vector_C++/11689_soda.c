#include<stdio.h>
int main()
{
    int e,f,c,i,rem,div,emp,total,t;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d %d %d",&e,&f,&c);

        emp=e+f;
        total=0;
        while(emp>=c)
        {
            div=emp/c;
            rem=emp%c;
            total=total+div;
            emp=div+rem;
        }
        printf("%d\n",total);
    }
}
