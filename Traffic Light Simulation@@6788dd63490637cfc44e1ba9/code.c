#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a == 'R'){
        printf("Stop\n");
    }
    if(a =='G'){
        printf("Go\n");
    }
    if(a =='Y'){
        printf("Slow Down\n");
    }
    else{
        printf("Invalid input\n");
    }
}