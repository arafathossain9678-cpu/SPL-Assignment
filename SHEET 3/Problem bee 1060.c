#include <stdio.h>

int main() {
    double num;
    int A = 0; 
    for (int i = 0; i < 6; i++) {
        scanf("%lf", &num);
        if (num > 0) {
            A++;
        }
    }
    printf("%d valores positivos\n", A);

    return 0;
}
