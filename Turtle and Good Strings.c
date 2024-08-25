#include<stdio.h>
#include<string.h>
int main()
{
    int t,n;
    char s[102];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",s);
        if(s[0]==s[n-1])
        {
            printf("No\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
