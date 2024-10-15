#include <stdlib.h>
#include <stdio.h>

void enqueue();
void dequeue();
void printQ();

int Q[10]={}, front=0, rear=0, inQ=0;
//line 11 works out the size of my array by dividing the array
//reserved memory by the data type it finds in the first index
int qSize = sizeof(Q) / sizeof(Q[0]);

int main(){
	int choice=0;
	do{
inQ=0;
		for (int i=front;i<rear;i++) {
			inQ++;
		}
		printf("The values of the array are: \n");
printQ();
	printf("\n Do you want to add(1), remove(2) or quit(3)?: \n");
	scanf("%d",&choice);
	if (choice==1){
		enqueue();
		}
	else if (choice==2){
		dequeue();
}
	else if (choice==3){
	break;
		}
	else{
		printf("Enter a valid choice.");
	}
	}while (choice!=3);
	return 0;
}

void printQ(){
	printf("\n");
	for(int i=front; i<rear; i++){
		printf("%d ",Q[i%10]);
		printf("|");
	}
	printf("\n\n");
}

void enqueue() {
	int input=0;

	if(inQ>=10){
		printf("OVERFLOW DETECTED!!! ADDING DATA CANCELLED \n");
	}
	else{
		printf("What number would you like to enter?: \n");
		scanf("%d",&input);
		Q[rear%10]=input;
		rear++;
	}
}
void dequeue(){
int input=0;
printf("There are %d numbers in Q before removal \n",inQ);
if (inQ==0){
printf("UNDERFLOW DETECTED!!! NO DATA TO REMOVE \n");
}
else{
	front++;
}
}