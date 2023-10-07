#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int stack[10];
int top = -1;
int IsEmpty = 1;
int IsFull = 0;

void Options(){
	system("cls");
	printf("[1] Push \n");
	printf("[2] Pop \n");
	printf("[3] Top \n");
	printf("[4] Check IsEmpty \n");
	printf("[5] Isfull \n");
	printf("[7] Exit \n");
}

void Push(){
	int data;
	if(IsFull){
		printf(" Stack OverFlow :\n");
		IsFull = 1;
	}
	else{
		printf("Enter A Data :");
		scanf("%d",&data);
		top++;
		stack[top] = data;
		IsEmpty = 0;
		printf("\nThe %d is Push at %d \n",data,top+1);
		printf("Press any Key to Continue\n");
		getch();
	}
}
void Pop(){
	if(IsEmpty){
		printf("\nStack is Empty :\n");
		printf("\nEnter any key To Continue : ");
		getch();
	}
	else{
		printf("\nPop %d at %d \n",stack[top],top+1);
		printf("\nEnter any key To Continue : ");
		getch();
		top--;
		if(top == -1){
			IsEmpty = 1;
		}
	}
}
void Peek(){
	printf("\n%d Is at %d\n",stack[top],top+1);
	getch();			
}
void Isempty(){
	if(IsEmpty){
		printf("\nStack is Empty :\n");
		printf("Enter any key to countinue :");
		getch();
	}
	else{
		printf("\nStack is Not Empty:\n");
		printf("Enter any key to continue :");
		getch();
	}
}
void Isfull(){
	if(IsFull){
		printf("\nStack is Full :\n");
		printf("Enter any key to continue :");
		getch();
	}
	else{
		printf("\n Stack is Not Fulll :\n");
		printf("Enter any key To Continue : ");
		getch();
	}
}

void main(){
	int choise;
	printf("\n Stack With Array \n");

	do{
		Options();
		printf("\nEnter A Choice :> ");
		scanf("%d",&choise);
		switch(choise){
		case 1:
			Push();
			break;
		case 2:
			Pop();
			break;
		case 3:
			Peek();
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
			printf("\nInvalid Choise :\n");
			break;
		}
	}while(1);
}
