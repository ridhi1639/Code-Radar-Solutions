#include <stdio.h>
int main() {
    int a,b,c;
    double average ;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    average=((a+b+c)/3.0);
    printf("Average: %.2lf",average);
    return 0;
}