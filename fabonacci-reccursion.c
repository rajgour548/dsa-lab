#include <stdio.h>
int reccursivefabonacci(int i);
int main(){
    int n;
printf("Enter no of terms you want:");
scanf("%d",&n);
 printf("The fabonacci series is:");
for(int i=0;i<n;i++){
   printf("%d,",reccursivefabonacci(i));
}
return 0;
}
int reccursivefabonacci(int i){
    if(i==0){
        return 0;
    }
    else if(i==1){
        return 1;
    }
    else{
        return ((reccursivefabonacci(i-1))+(reccursivefabonacci(i-2)));
    }
}