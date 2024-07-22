#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,nb;
    char ch[100],conversion[10],resultat[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",ch);
        if(strlen(ch)>10)
        {
            nb=0;
            for(int j=1;j<strlen(ch)-1;j++)
            {
                nb++;
            }
            //conversion d'un nombre en chaine de caractères
            sprintf(conversion, "%d", nb);
            //concaténation des caractères
            snprintf(resultat, sizeof(resultat), "%c%s%c", ch[0], conversion, ch[strlen(ch) - 1]);
            strcpy(ch, resultat);

        }
        printf("%s\n",ch);
    }
    return 0;
}
