#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    long long int n,a=0,d=0;
    scanf("%lld",&n);
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if(a>d)
    {
        printf("Anton");
    }
    else if(a<d)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}
