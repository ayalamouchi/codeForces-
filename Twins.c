#include<stdio.h>
int main()
{
    int n,nb=0,i,som=0,j,aux,ans=0;
    int t[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t[i]);
        som+=t[i];
    }
    for(i=1;i<n;i++)
    {
        aux=t[i];
        j=i-1;
        while(j>=0 && t[j]>aux)
        {
            t[j+1]=t[j];
            j=j-1;
        }
        t[j+1]=aux;
    }
    for(i=n-1;i>=0;i--)
    {
        ans+=t[i];
        nb++;
        if(ans>som/2)
        {
            break;
        }
    }
    printf("%d\n",nb);
    return 0;
}

