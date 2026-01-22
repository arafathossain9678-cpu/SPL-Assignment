#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int X[1000]; 

    for (int i = 0; i < N; i++)
        scanf("%d", &X[i]);

    int min = X[0];
    int pos = 0;

    for (int i = 1; i < N; i++)
    {
        if (X[i] < min)
        {
            min = X[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", pos);

    return 0;
}
