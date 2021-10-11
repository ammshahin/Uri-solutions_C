#include<stdio.h>
int main()
{
    float m=0;
    int n=0;
    scanf("%f",&m);
    n=m;
    m=m-n;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n/100);
    n=n%100;
    printf("%d nota(s) de R$ 50.00\n",n/50);
    n=n%50;
    printf("%d nota(s) de R$ 20.00\n",n/20);
    n=n%20;
    printf("%d nota(s) de R$ 10.00\n",n/10);
    n=n%10;
    printf("%d nota(s) de R$ 5.00\n",n/5);
    n=n%5;
    printf("%d nota(s) de R$ 2.00\n",n/2);
    n=n%2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n/1);
    n=m/.50;
    printf("%d moeda(s) de R$ 0.50\n",n);
    if(n>0)
    {
        m-=0.50;
    }
    n=m/.25;
    printf("%d moeda(s) de R$ 0.25\n",n);
    if(n>0)
    {
        m-=0.25;
    }
    n=m/.10;
    printf("%d moeda(s) de R$ 0.10\n",n);
    if(n>0)
    {
        m-=n*0.10;
    }
    n=m/.05;
    printf("%d moeda(s) de R$ 0.05\n",n);
    if(n>0)
    {
        m-=n*0.05;
    }
    m=m*100;
    printf("%.0f moeda(s) de R$ 0.01\n",m);
    return 0;
}

