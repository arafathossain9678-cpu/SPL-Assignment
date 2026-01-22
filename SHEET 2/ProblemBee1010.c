#include <stdio.h>
 
int main(){
   int A ,B,C,D;
   float E,F ,  Value;
   scanf("%d%d%f",&A,&B,&E);
   scanf("%d%d%f",&C,&D,&F);

   Value =(B*E)+(D*F);
   printf("VALOR A PAGAR: R$ %.2f\n",Value);
 
    return 0;
}