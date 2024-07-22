#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    int res=1;
    scanf("%s",ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==ch[i+1])
        {
            res++;
            if(res==7)
            {
                printf("YES");
                break;
            }

        }
        else
        {
            res=1;
        }

    }
    if(res<7)
    {
        printf("NO");
    }

    return 0;
}
