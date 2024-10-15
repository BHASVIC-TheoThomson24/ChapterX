#include<stdio.h>
#include<string.h>

char stack[10], top=0, string[10];
int stringlength;
void printstack();
void add(char input);
void pop();
char cast(int input);

int main(void) {
    printf("Please enter a string to convert: \n");
    do {
        scanf("%s",&string);
        stringlength=strlen(string);
        if(stringlength<0 || stringlength>8) {
            printf("String must be between 1 and 8 letters, Please try again : \n");
        }
    }
    while(stringlength<0 || stringlength>8);
    for (int i=0;i<stringlength;i++) {
        printf("%c",string[i]);
    }
    for(int i=stringlength;i>=0;i--) {
        add(string[i]);
    }
add(cast(stringlength));


    printstack();
    return 0;
}

void add(char input) {
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
        printf("%c |",stack[i]);
    }
    printf("\n\n");
}

char cast(int input) {
char output='a';
    switch(input) {
        case 0:output='0';
        break;
        case 1:output='1';
        break;
        case 2:output='2';
        break;
        case 3:output='3';
        break;
        case 4:output='4';
        break;
        case 5:output='5';
        break;
        case 6:output='6';
        break;
        case 7:output='7';
        break;
        case 8:output='8';
        break;
        case 9:output='9';
        default:printf("Error casting integer to char");
        break;
    }
    return output;
}