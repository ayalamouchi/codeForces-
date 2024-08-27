#include<stdio.h>
int min(int a, int b) {
    return (a < b) ? a : b;
}

int min_of_three(int a, int b, int c) {
    return min(min(a, b), c);
}
int main()
{
    int n,k,l,c,d,p,nl,np,millilitres,toastsb,toastsc,toastss,res;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    millilitres=k*l;
    toastsb=millilitres/nl;
    toastsc=c*d;
    toastss=p/np;
    res=(min_of_three(toastsb,toastsc,toastss))/n;
    printf("%d",res);
    return 0;

}
