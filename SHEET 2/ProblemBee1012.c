#include <stdio.h>
 
int main() {
 
    double a,b,c,T,C,TR,Q,R;
const double pi =3.14159;
scanf("%lf%lf%lf",&a,&b,&c);
T =(a*c)/2;
C =(pi*c*c);
TR =((a+b)*c)/2;
Q = b*b;
R = a*b;
printf("TRIANGULO: %.3lf\n",T);
printf("CIRCULO: %.3lf\n",C);
printf("TRAPEZIO: %.3lf\n",TR);
printf("QUADRADO: %.3lf\n",Q);
printf("RETANGULO: %.3lf\n",R);
 
    return 0;
}