#include<stdio.h>
#include<stdlib.h>

int stack[10], top=0;
void printstack();
void add();
void pop();

int main(void) {
    int choice=0;
do{
    printf("The values in the stack are: \n");
    printstack();
    printf("Would you like to add(1), pop(2) or quit(3): \n");
    scanf("%d",&choice);
    if (choice==1){
        add();
    }
    else if (choice==2){
        pop();
    }
    else if(choice==3) {
        break;
    }
    else{
        printf("Enter a valid choice.");
    }
}
    while (choice!=3);
    return 0;
}

void add() {
    int input=0;
    if(top==10) {
        printf("STACK OVERFLOW ERROR! \n");
    }
    else {
        printf("What number would you like to add?");
        scanf("%d",&input);
        stack[top]=input;
        top++;
    }
}

void pop() {
    if (top==0){
printf("STACK UNDERFLOW ERROR! \n");
    }
    else {
        printf("The value that you popped is %d \n",stack[top-1]);
        top--;
    }

}

void printstack() {
    for (int i=0; i<top;i++) {
        printf("%d |",stack[i]);
    }
    printf("\n\n");
}