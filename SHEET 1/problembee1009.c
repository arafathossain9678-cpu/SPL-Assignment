#include <stdio.h>

int main()
{
    char name[50];
    double A, B, C;

    scanf("%s", name);   
    scanf("%lf", &A);    
    scanf("%lf", &B);   

    C = A + (B * 0.15);  

    printf("TOTAL = R$ %.2lf\n", C);

    return 0;
}
