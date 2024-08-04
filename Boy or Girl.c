#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    char tab[100];
    int nb=0,j;
    scanf("%s",ch);
    for(int i=0;i<strlen(ch);i++)
    {
        int found=0;
        for(j=0;j<nb;j++)
        {
            if(ch[i]==tab[j])
            {
                found=1;
                break;
            }
        }
        if(!found)
        {
            tab[nb]=ch[i];
            nb++;
        }
    }
    if(nb%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
