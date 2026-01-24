#include<stdio.h>
int main()
{
    int a1,b1,a2,b2,x,y;
    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
    if(a1>a2)
        x=a1;
    else
        x=a2;
    if(b2<b1)
    y=b2;
    else
        y=b1;
    if(y>=x)
        printf("%d %d\n",x,y);
    else
        printf("-1\n");

}