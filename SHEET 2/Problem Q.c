#include<stdio.h>
#include<math.h>
int main(){
    int n,i,a,r,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {scanf("%d",&a);

        if(a==0)
            printf("0");
       while(a>0)
         {
            r=a%10;
            c=r;
            a=a/10;
            printf("%d ",c);
         }printf("\n");
    }



   }