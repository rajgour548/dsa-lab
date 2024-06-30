# include<stdio.h>
int main(){
    int ft=0;
    int st=1;
    int nt;
    int n;
    printf("Enter the no of terms you want:");
    scanf("%d",&n);
    printf("The fabonacci series is: %d,%d,",ft,st);
    for(int i=2;i<=n;i++){
nt=ft+st;
ft=st;
st=nt;
printf("%d,",nt);
    }
    return 0;
}