#include<stdio.h>
int slove(int n, int a[])
{
    int max=a[0],min=a[0];
    for(int i=0; i<n; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {

            min=a[i];
        }
    }
    printf("%d %d\n",min,max);

    return 0;




}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    slove(n,a);
}
