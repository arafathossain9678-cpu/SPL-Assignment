#include<stdio.h>
int main()
{
   int n,m;
   scanf("%d %d",&n, &m);
   int X[n][m];
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         scanf("%d", &X[i][j]);
      }
   }
   int p;
   scanf("%d", &p);
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         if(p == X[i][j]){
            printf("will not take number");
            return 0;
         }
      }
   }
   printf("will take number");
}