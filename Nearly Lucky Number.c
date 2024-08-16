#include<stdio.h>
int islucky(int number)
{
    if (number == 0) return 0;
    while(number!=0)
    {
        int unite= number%10;
        if(unite!=4 && unite!=7)
        {
            return 0;
        }
        number=number/10;
    }
    return 1;
}
int main()
{
    long long n;
    int k,nb=0;
    scanf("%lld474404774",&n);
    while(n!=0)
    {
        k=n%10;
        if(k==4 || k==7)
        {
            nb++;
        }
        n=n/10;

    }
    if(islucky(nb))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
