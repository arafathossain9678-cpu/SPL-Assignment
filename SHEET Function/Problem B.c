#include<stdio.h>
int slove(int n){

    printf("1");
     for(int i=2;i<=n;i++){
    printf(" %d",i);
     }
     return 0;
}




int main(){
    int n;
    scanf("%d",&n);

    slove(n);

}
