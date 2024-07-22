#include<stdio.h>

int main()
{
    int n, X=0;
    char ch[4];
    scanf("%d",&n);
    for(int i=0; i<n;i++)
    {
        scanf("%s",ch);
        if((strcmp(ch,"++X")==0) || (strcmp(ch,"X++")==0))
        {
            X++;
        }
        else{
                X--;
            }
    }
    printf("%d", X);

    return 0;
}
