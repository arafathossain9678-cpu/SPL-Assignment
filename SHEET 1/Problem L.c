#include <stdio.h>
#include <string.h>

int main() {
    char f1[1005], s1[1005];
    char f2[1005], s2[1005];
    
    
    scanf("%s %s", f1, s1);
    scanf("%s %s", f2, s2);
    
   
    if (strcmp(s1, s2) == 0)
        printf("ARE Brothers\n");
    else
        printf("NOT\n");
    
    return 0;
}
