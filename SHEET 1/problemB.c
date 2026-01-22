#include<stdio.h>
int main(){
   int x;
   long long int y;
   char name;
   float z;
   double c;

   scanf("%d %lld %c %f %lf", &x, &y, &name, &z, &c);
   printf("%d\n%lld\n%c\n%f\n%lf\n", x, y, name, z, c);

   return 0;
}
