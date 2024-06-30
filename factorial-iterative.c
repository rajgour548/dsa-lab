#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int fact=n;
    for(int i=1;i<n;i++){
        fact=fact*i;
    }
    printf("the factorial of %d is:%d",n,fact);
    return 0;
}