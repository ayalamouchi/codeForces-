#include<stdio.h>

int main()
{
    int n,a,b,c,res,nb=0;;

    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        res=a+b+c;

        if (res>=2)
        {
            nb++;
        }
    }
    printf("%d",nb);

    return 0;
}
