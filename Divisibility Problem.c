#include<stdio.h>
int main()
{
    int t;
    long long int a,b,nb;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld %lld",&a,&b);
        if(a%b==0)
        {
            printf("0\n");
        }
        else
        {
            nb=b-(a%b);
            printf("%d\n",nb);
        }
    }

    return 0;
}
