#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float a=4,b=4.5,c=5,d=2,e=1.5,z;
    if(x==1)
    {
        printf("Total: R$ %.2f\n",a*y);
    }
    if(x==2)
    {
        printf("Total: R$ %.2f\n",b*y);
    }
    if(x==3)
    {
        printf("Total: R$ %.2f\n",c*y);
    }
    if(x==4)
    {
        printf("Total: R$ %.2f\n",d*y);
    }
    if(x==5)
    {
        printf("Total: R$ %.2f\n",e*y);
    }
    return 0;

}
