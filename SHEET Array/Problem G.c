#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   int A[n+1];
   for(int i=1; i<=n; i++){
      scanf("%d", &A[i]);
   }
   int first = 1;
   int last = n;
   while(first <= last){
      if(A[first] != A[last]){
         printf("NO");
         return 0;
      }
      first++;
      last--;
   }
   printf("YES");

}