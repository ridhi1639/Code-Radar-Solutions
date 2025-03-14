#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    a=0;
    for(i=1;i<=n;i++){
        printf("%d",a);
        a=a+i;
    }
}