#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int smax=arr[0];
    for(int i=0;i<n;i++){
        if(smax<arr[i]&&arr[i]!=max){
           smax= arr[i];
        }
    

}
printf("%d",smax);
  return 0;
}