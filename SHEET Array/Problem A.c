#include<stdio.h>
int main(){
     int n;
    scanf("%d",&n);
     long long int sum =0;
    long long int omi[n];
    for(int i=0; i<n;i++)
    {
        scanf("%lld",&omi[i]);
        sum=sum+omi[i];
    }
    if (sum>0)
    printf("%lld",sum);
    else
    printf("%lld",-sum);
}
