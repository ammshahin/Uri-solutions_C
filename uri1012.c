#include <stdio.h>
#define PI 3.14159
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("TRIANGULO: %.3f\n",.5*a*c);
    printf("CIRCULO: %.3f\n",PI*(c*c));
    printf("TRAPEZIO: %.3f\n",(a+b)/2*c);
    printf("QUADRADO: %.3f\n",b*b);
    printf("RETANGULO: %.3f\n",a*b);
    return 0;

}
