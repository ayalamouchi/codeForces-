#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        if(y>x)
        {
            printf("%d\n",y-x);
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}
