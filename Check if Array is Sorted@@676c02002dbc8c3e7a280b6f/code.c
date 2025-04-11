
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]<=arr[j+1]){
                a=1;
            }
            else{ a=0;}
        }
    }
    if(a==1) printf("Sorted");
    else if(a==0) printf("Not Sorted");
    return 0;
}