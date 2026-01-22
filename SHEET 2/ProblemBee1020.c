#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int years = N / 365;
    N = N % 365;

    int months = N / 30;
    N = N % 30;

    int days = N;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
