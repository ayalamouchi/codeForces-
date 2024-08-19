#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    scanf("%s",ch);
    if(islower(ch[0]))
    {
        ch[0]=toupper(ch[0]);
    }
    printf("%s",ch);
    return 0;
}
