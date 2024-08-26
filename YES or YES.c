#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    int t;
    char s[5];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        for(int i=0;i<strlen(s);i++)
        {
            s[i]=toupper(s[i]);
        }
        if(strcmp("YES",s)==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
