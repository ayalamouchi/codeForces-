#include<stdio.h>
int main()
{
    int n,k,res=0,T[100];
    scanf ("%d %d", &n,&k);

    for(int i=0; i<n;i++)
    {
        scanf("%d",&T[i]);
    }

    for(int i=0;i<n;i++)
    {
        if((T[i]>=T[k-1]) && (T[i]>0))
        {
            res++;
        }
    }

    printf("%d",res);

    return 0;
}
