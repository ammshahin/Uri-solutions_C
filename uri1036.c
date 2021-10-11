#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,r1,r2;
    scanf("%f%f%f",&a,&b,&c);
    if(a>0&&b>0&&c>0&&pow(b,2)>(4*a*c))
    {
        r1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
        printf("R1 = %.5f\n",r1);
        r2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
        printf("R2 = %.5f\n",r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
