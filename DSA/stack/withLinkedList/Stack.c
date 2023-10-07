#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



struct Stack{
	int data;
	struct Stack* next;

};

struct Stack* top = NULL;
int IsEmpty = 1;
int IsFull = 0;

void Options(){
	system("cls");
	printf(":::::::: Stack Oprations ::::::::::\n");
	printf("[1] Push \n");
	printf("[2] Pop \n");
	printf("[3] Top \n");
	printf("[4] Check IsEmpty \n");
	printf("[5] Isfull \n");
	printf("[7] Exit \n");
}

void Push(){
	int data;
	struct Stack *newStack;
	newStack = (struct Stack *)malloc(sizeof(struct Stack));
	printf("\nEnter A data For Stack :>");
	scanf("%d",&newStack->data);
	newStack->next = NULL;

	if(IsEmpty){
		top = newStack;
		IsEmpty = 0;
		printf("\nThe %d Is Push\n",newStack->data);
		printf("Press Any Key To Continue :");
			getch();
	}
	else{
		if(IsFull){
			printf("\nStack is Full :\n");
		}
		else{
			newStack->next = top;
			top = newStack;
			printf("\nThe %d Is Push\n",newStack->data);
			printf("Press Any Key To Continue :");
			getch();
		}
	}
}
void Pop(){
	if(IsEmpty){
		printf("\nStack is Empty :\n");
		printf("Press Any Key To Continue :");
		getch();
	}
	else{
		struct Stack *nodeToFree;
		nodeToFree = (struct Stack *)malloc(sizeof(struct Stack));
		nodeToFree = top;
		top = top->next;
		printf("\n%d Is Pop\n",nodeToFree->data);
		printf("Press Any Key To Continue :");
		getch();
		free(nodeToFree);
		if(top == NULL){
			IsEmpty = 1;
		}
	}
}
void Top(){
	printf("\n There is %d on Top  \n",top->data);
	printf("Press Any Key To Continue :");
	getch();

}
void Isempty(){
	if(IsEmpty){
		printf("\n Stack Is Empty :");
		printf("Press Any Key To Continue :");
		getch();
	}
	else{
		printf("\nStack Is Not Empty :\n");
		printf("Press Any Key To Continue :");
		getch();

	}
}
void Isfull(){
	if(IsFull){
		printf("\n Stack Is Full :");
		printf("Press Any Key To Continue :");
		getch();	
	}
	else{
		printf("\n Stack Is Not Full :\n");
		printf("Press Any Key To Continue :");
		getch();		
	}
}
void main(){
	printf("Hello Stack With Linked List ::::::\n");
	int choise;
	while(1){
		Options();
		printf("Enter A Choise :");
		scanf("%d",&choise);
		switch(choise){
		case 1:
			Push();
			break;
		case 2:
			Pop();
			break;
		case 3:
			Top();
			break;
		case 4:
			Isempty();
			break;
		case 5:
			Isfull();
			break;
		case 7:
			exit(0);
		default:
			printf("Invalid Choise :\n");
			printf("Press Any Key To Continue :");
			getch();
			break;
		}
	}
	
}