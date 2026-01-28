#include<stdio.h>
int main (){
    int n;
    printf("Enter n val : ");
    scanf("%d",&n);
    
    n%2==0 ? printf("Even") : printf("Not Even");

    return 0;
}