#include<stdio.h>
#define size 10
int stack[size],top=-1,i;
void push();
void pop();
void display();
int main(){
    int ch;
    do{
        printf("Enter your choice:[1].push() | [2].pop() | [3].display | [4].Exit-->");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            default:printf("invalid choice");
            break;
        }
    }while(ch!=4);
}

void push(){
    if(top==size-1){
        printf("\nstack is overflow\n");
    }
     top++;
        printf("Enter the element to push:");
        scanf("%d",&stack[top]);
}

void pop(){
    if(top==-1){
        printf("\nstack is empty(underflow)\n");
    }
    printf("The poped element is%d\n",stack[top]);
    top--;
}

void display(){
    if(top==-1){
        printf("\nstack is empty(underflow)\n");
    }
    printf("The elements in stack are:top");
    for(int i=top;i>=0;i--){
        printf("->%d",stack[i]);
    }
     printf ("\n");
}