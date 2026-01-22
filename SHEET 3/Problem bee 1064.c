#include <stdio.h>

int main() {
    double num, sum = 0.0;
    int A = 0;  
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &num);
        if (num > 0) {
            sum += num;
            A++;
        }
    }
    printf("%d valores positivos\n", A);
    printf("%.1lf\n", sum /A);

    return 0;
}