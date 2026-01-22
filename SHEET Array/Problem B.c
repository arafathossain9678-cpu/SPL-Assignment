#include<stdio.h>
int main(){
     int n;
    scanf("%d",&n);
     
    long long int omi[n];

    for(int i=0; i<n;i++)
    {
        scanf("%lld",&omi[i]);
        
    }
    long long int p;
    scanf("%lld",&p);
    for(int i=0;i<n;i++)
    {
    if(p==omi[i]){
    printf("%d",i);
    return 0 ;
    }
    }
    
    printf("-1");
    return 0;
    }

