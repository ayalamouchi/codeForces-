#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    scanf("%s",ch);
    int i,j,aux,k=0;
    int tab[100];
    j=0;
    for(i=0;i<strlen(ch);i++)
    {
       if(ch[i]!='+')
       {
           tab[j]=ch[i]-'0';
           j++;
       }
    }
    for (i = 1; i < j; i++) {
        aux = tab[i];
        k = i - 1;
        while (k >= 0 && tab[k] > aux) {
            tab[k + 1] = tab[k];
            k--;
        }
        tab[k + 1] = aux;
    }
    for(i=0;i<j;i++)
    {
        if(i!=0)
           {
               printf("+");
           }
           printf("%d",tab[i]);
    }
    return 0;
}
