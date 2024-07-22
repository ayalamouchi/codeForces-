#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];
    scanf("%s\n%s",ch1,ch2);
    for(int i=0;ch1[i]!='\0';i++)
    {
        ch1[i]=tolower(ch1[i]);
    }
    for(int i=0;ch2[i]!='\0';i++)
    {
        ch2[i]=tolower(ch2[i]);
    }
    if(strcmp(ch1,ch2)==0)
    {
        printf("0");
    }
    else if(strcmp(ch1,ch2)<0)
    {
        printf("-1");
    }
    else
    {
        printf("1");
    }
    return 0;
}
