#include<stdio.h>
int main()
{
    int n,y=0,m=0;
    scanf("%d",&n);
    y=n/365;
    printf("%d ano(s)\n",y);
    n=n%365;
    m=n/30;
    printf("%d mes(es)\n",m);
    n=n%30;
    printf("%d dia(s)\n",n);
    return 0;
}
