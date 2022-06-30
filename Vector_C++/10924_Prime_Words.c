#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,l,val,total,p;
    while(scanf("%s",&s)!=EOF)
    {
        l=strlen(s);
        total=0;
        p=1;
        for(i=0;i<l;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
             val=s[i]-'A'+27;

            }
            if(s[i]>='a' && s[i]<='z')
            {
                val=s[i]-'a'+1;

            }
            total=total+val;
        }
        if(total<=1)
        {
            p=1;
        }
        else if(total%2==0)
            p=0;
        else{
        for(i=3;i<total;i+=2)
        {
            if(total%i==0)
            {
                p=0;
                break;
            }
        }
        }
        if(p==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
