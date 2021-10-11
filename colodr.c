#include<stdio.h>
int main()
{
     system("COLOR 2");
    printf("hello color");
    int x;
        scanf("%d",&x);
    if(x == 1)
    {
        system("COLOR C");
        printf("color will be green");
    }
    fflush(stdin);
    getch();
}
