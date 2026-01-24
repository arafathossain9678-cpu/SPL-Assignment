#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;

    scanf("%d",&a);

    b=a/365;
    a=a%365;
    c=a/30;
    a=a%30;
    d=a;

    printf("%d years\n%d months\n%d days\n",b,c,d);

}