#include<stdio.h>
int main()
{
    int w,n,k,i,nb=0;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        nb=nb+(k*i);
    }
    if(n>=nb || w<=1)
    {
        printf("0");
    }
    else
    {
        printf("%d",nb-n);
    }
    return 0;
}
