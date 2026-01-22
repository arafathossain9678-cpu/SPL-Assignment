#include <stdio.h>

long long solve(int n)
{
    if (n <= 1)
        return 1;
    return n * solve(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", solve(n));
    return 0;
}
