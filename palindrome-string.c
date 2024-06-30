#include <stdio.h>
#include <string.h>
int main(){
char string[30];
int length;
int flag=0;
printf("Enter a String:");
scanf("%s",&string);
length=strlen(string);
for(int i=0;i<length/2;i++){
    if(string[i]!=string[length-i-1]){
        flag=1;
        break;
    }
}
if (flag==1){
printf("%s is not a palindrome string",string);
}
else{
    printf("%s is palindrome string",string);
}
return 0;
}