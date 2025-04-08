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
            arr[i]=max;
        }
    }
    int smax=arr[0];
    for(int i=0;i<n;i++){
        if(smax<arr[i]&&arr[i]!=max){
            arr[i]=smax;
        }

}
printf("%d",smax);
  return 0;
}