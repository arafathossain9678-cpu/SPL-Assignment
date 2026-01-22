#include <stdio.h>
#include <math.h>

int main()
{
    double A, B;
    scanf("%lf %lf", &A, &B);

    double x = A / B;

    printf("floor %.0lf / %.0lf = %.0lf\n", A, B, floor(x));
    printf("ceil %.0lf / %.0lf = %.0lf\n", A, B, ceil(x));
    printf("round %.0lf / %.0lf = %.0lf\n", A, B, round(x));

    return 0;
}
