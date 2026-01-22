#include<stdio.h>

float slove(int n,float a[])
{
    float sum=0;
    for(int i=0; i<n; i++)
    {
        sum = sum+a[i];
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    float a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%f",&a[i]);

    }

    float x =slove(n,a);
    printf("%.7f",(float)x/n);
}










