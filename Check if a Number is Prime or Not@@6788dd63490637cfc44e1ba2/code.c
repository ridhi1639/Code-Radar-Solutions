#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int check=1;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            check=0;
            
        }}
    if(check==1) printf("Prime");
    else printf("Not Prime");
    
}
    