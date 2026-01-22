#include<stdio.h>
int main(){
   int a,b,c,d,e;
   scanf("%d%d%d",&a,&b,&c);
   if((a>=b && a>=c)|| (b>=a && b>=c))
   d=(a>b)?a :b;
   else 
   d=c;
   if((a<=b && a<=c)|| (b<=a && b<=c))
   e =(a<=b)?a:b;
   else 
   e=c;
   printf("%d %d\n",e,d);
}
