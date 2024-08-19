#include<stdio.h>
int main()
{
    int a,b,nb=0;
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        a*=3;
        b*=2;
        nb++;
    }
    printf("%d",nb);
    return 0;
}
