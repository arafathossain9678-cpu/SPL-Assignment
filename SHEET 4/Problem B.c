#include<stdio.h>
int main(){
    int x;
    int n =0;
    scanf("%d",&x);
    for(int i=2; i<=x;i+=2)
    {
       printf("%d\n",i);
       n=1;
}
if(n==0){
    printf("-1\n");
}
return 0;
}