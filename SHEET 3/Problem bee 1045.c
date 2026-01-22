#include <stdio.h>

int main() {
    double A, B, C, E; 
    scanf("%lf %lf %lf", &A, &B, &C);
    if (A < B) { E = A; A = B; B = E; }
    if (B < C) { E = B; B = C; C = E; }
    if (A < B) { E = A; A = B; B = E; }

    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (A*A == B*B + C*C)
            printf("TRIANGULO RETANGULO\n");
        else if (A*A > B*B + C*C)
            printf("TRIANGULO OBTUSANGULO\n");
        else if (A*A < B*B + C*C)
            printf("TRIANGULO ACUTANGULO\n");

        if (A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A == B || B == C || A == C)
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}