#include<stdio.h>
int main()
{
    long long int n,f=0;
    scanf("%I64d",&n);
    if(n%2==0)
    {
        f=n/2;
    }
    else
    {
        f=-((n/2)+1);
    }
    printf("%I64d",f);
    return 0;
}
