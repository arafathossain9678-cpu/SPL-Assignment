#include <stdio.h>

void printDescending(int n)
{
    if (n == 0)  
        return;

    printf("%d", n);

    if (n > 1)
        printf(" ");  

    printDescending(n - 1);  
}

int main()
{
    int n;
    scanf("%d", &n);

    printDescending(n);
    return 0;
}
