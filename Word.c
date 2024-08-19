#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int min=0,maj=0;
    scanf("%s",ch);
    for(int i=0;i<strlen(ch);i++)
    {
        if(isupper(ch[i]))
        {
            maj++;
        }
        else
        {
            min++;
        }
    }
    for(int i=0;i<strlen(ch);i++)
    {
        if(maj>min)
        {
            ch[i]=toupper(ch[i]);
        }
        else
        {
            ch[i]=tolower(ch[i]);
        }
    }
    printf("%s",ch);
    return 0;
}
