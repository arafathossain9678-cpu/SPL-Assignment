#include <stdio.h>
#include <string.h>
int main()
{

    char a[100000];
    int y;
    scanf("%s", a);

    for (int i = 0; i < strlen(a); i++)
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            y = a[i] + 32;
            printf("%c", y);
        }
        else if (a[i] >= 'a' && a[i] <= 'z')
        {
            y = a[i] - 32;
            printf("%c", y);
        }
        else if (a[i] == ',')
        {
            printf(" ");
        }
}
