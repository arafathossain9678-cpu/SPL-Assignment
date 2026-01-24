#include<stdio.h>
int main()
{
    int n,m,a,i,b=9999999;

    scanf("%d",&n);
    int x[n];

    for( i=1;i<=n;i++)
    {
       scanf("%d",&x[i]);
       if(b>x[i])
           {
                b=x[i];
            a=i;
           }
    }

      printf("%d ",b);
      printf("%d ",a);
}