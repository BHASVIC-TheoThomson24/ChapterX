#include<stdio.h>
#include<string.h>

char stack[10], top=0, string[10];
int stringlength=0;
void printstack();
void add(int input);
void pop();

int main(void) {
    printf("Please enter a string to convert: \n");
    scanf("%s",&string);
    for (int i=0;i<9;i++) {
        printf("%c",string[i]);
    }
    stringlength=strlen(string);
add(string[5]);



    add(stringlength);
    printstack();
    return 0;
}

void add(int input) {
    if(top==10) {
        printf("STACK OVERFLOW ERROR! \n");
    }
    else {
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