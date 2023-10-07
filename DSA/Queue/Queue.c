#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Queue[20];
int First = 0;
int Last = -1;

void Options(){
	printf("[1] Enqueue\n");
	printf("[2] Dequeue\n");
	printf("[3] Peek\n");
	printf("[4] IsEmpty\n");
	printf("[5] EXIT\n");
}
void IsEmpty(){
	if(Last == -1 || First > Last){
		printf("Queue is Empty::\n");
	}
	else{
		printf("Queue is Not Empty:\n");
	}
}
void Enqueue(int data){
	Last++;
	Queue[Last] = data;
	printf("Enqueue\n");
}

void Dequeue(){

	if(First > Last){
		printf("Queue is Empty : \n");
	}
	else{
		printf("Dequeue : %d\n",Queue[First]);
		First++;
	}
		
}
int Peek(){
	return Queue[First];
}
void main(){
	int choise;
	int data;
	while(1){
		system("cls");
		Options();
		printf("Enter a Choise : ");
		scanf("%d",&choise);
		switch(choise){
		case 1:
			printf("Enter a Queue Data :");
			scanf("%d",&data);
			Enqueue(data);
			printf("Press Any Key To Continue::");
			getch();
			break;
		case 2:
			Dequeue();
			printf("Press Any Key To Continue::");
			getch();
			break;
		case 3:
			printf("First Queue is Now :%d\n",Peek());
			printf("Press Any Key To Continue::");
			getch();
			break;
		case 4:
			IsEmpty();
			printf("Press Any Key To Continue::");
			getch();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Invalid Choise :\n");
			printf("Press Any Key To Continue::");
			getch();
			break;
		}
	}
}