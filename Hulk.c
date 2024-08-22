#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
    {
         printf("I hate it");
    }

    else if(n>1)
    {
        printf("I hate that");
        for(int i=2;i<n;i++)
        {
            if(i%2==0)
            {
                printf(" I love that");
            }
            else
            {
                printf(" I hate that");
            }
        }
        if(n%2==0 && n>1)
        {
            printf(" I love it");
        }
        else
        {
            printf(" I hate it");
        }
    }
    return 0;
}
