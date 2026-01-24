#include<stdio.h>
int main()
{
      long long int N,M;
      scanf("%lld%lld",&N,&M);
      long long int sum = ((N%10) + (M%10));
      printf("%lld",sum);
}