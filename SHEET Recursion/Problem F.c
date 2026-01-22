#include <stdio.h>
int evenPrint(int arr[], int n)
{
    if (n == 0)
    {
        printf("%d ", arr[n]);
        return 0;
    }
    printf("%d ", arr[n]);
    evenPrint(arr, n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n % 2 == 0)
        evenPrint(arr, n - 2);
    else
        evenPrint(arr, n - 1);
}