#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,n;
    gets(s);
    n=strlen(s);
    //printf("%d",n);
    if(s[n-1]%2==0)
    {
        printf("EVEN!!");
    }
    else
        printf("ODD!!");
}
