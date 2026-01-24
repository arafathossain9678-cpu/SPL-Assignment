#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    int y=0;
    for (int i=1; i<=x; i++)
    {
    if(x%i==0)
    y++;
    }
    if (y==2)
    printf("YES\n");
    else
    printf("NO\n");
}