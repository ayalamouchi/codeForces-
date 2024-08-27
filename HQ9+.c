#include<stdio.h>
#include<string.h>
int main()
{
    char p[102];
    int valide=0;
    scanf("%s",p);
    for(int i=0;i<strlen(p);i++)
    {
        if(p[i]=='H'|| p[i]=='Q'|| p[i]=='9')
        {
            valide=1;
            break;
        }

    }
    if(valide)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
