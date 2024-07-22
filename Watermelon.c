#include<stdio.h>
#include<stdlib.h>
int main()
{
    int k;
    scanf("%d",&k);
    if(k%2==0&&k!=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
