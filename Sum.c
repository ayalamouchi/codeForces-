#include<stdio.h>
int main()
{
    long long int t;
    int a,b,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a==b+c)||(b==a+c)||(c==a+b))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
