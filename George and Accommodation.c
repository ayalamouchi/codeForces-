#include<stdio.h>
int main()
{
    int n,p,q,nb=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p,&q);
        if(q-p>=2)
        {
            nb++;
        }
    }
    printf("%d",nb);
    return 0;
}
