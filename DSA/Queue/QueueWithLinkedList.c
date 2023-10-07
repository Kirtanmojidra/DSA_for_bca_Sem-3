#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Queue{
	int data;
	struct Queue* next; 
};
struct Queue *First=NULL;
struct Queue *Last=NULL;

void Options(){
	printf("[1] Enqueue\n");
	printf("[2] Dequeue\n");
	printf("[3] Peek\n");
	printf("[4] IsEmpty\n");
	printf("[5] EXIT\n");
	printf("\n");

}
void Enqueue(int data){
	struct Queue *temp;
	struct Queue *ptr =(struct Queue*)malloc(sizeof(struct Queue));
	temp = (struct Queue*)malloc(sizeof(struct Queue));
	temp->next = NULL;
	temp->data = data;

	if(First == NULL){
		First = (struct Queue*)malloc(sizeof(struct Queue));
		First = temp;
		printf("Enqueue : %d\n",First->data);
	}
	else {
		ptr = First;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->next = temp; 
		ptr = ptr->next;
		printf("Enqueue : %d\n",ptr->data);
	}

}

void Dequeue(){
	if(First==NULL){
		printf("Queue is Empty Cannot Dequeue:\n");
	}
	else{
		struct Queue *temp;
		temp = (struct Queue*)malloc(sizeof(struct Queue));
		printf("Dequeue : %d\n",First->data);
		First = First->next;
		free(temp);
	}
}

void Peek(){
	if(First == NULL){
		printf("Queue is Empty Cannot Peek:\n");
		
	}
	else{
		printf("first Queue is : %d\n",First->data);
	}
}
void IsEmpty(){
	if(First == NULL){
		printf("Queue Is Empty :\n");
	}
	else{
		printf("Queue is Not Empty:\n");
	}
}
void main(){
	int choise;
	int data;
	while(1){
		system("cls");
		Options();
		printf("Enter A Choise :");
		scanf("%d",&choise);
		switch(choise){
		case 1:
			printf("Enter a Data For Queue : ");
			scanf("%d",&data);
			Enqueue(data);
			printf("Press Any Key To Continue :");
			getch();
			break;
		case 2:
			Dequeue();
			printf("Press Any Key To Continue :");
			getch();
			break;
		case 3:
			Peek();
			printf("Press Any Key To Continue :");
			getch();
			break;
		case 4:
			IsEmpty();
			printf("Press Any Key To Continue :");
			getch();
			break;
		case 5:
			exit(0);
			break;
		default:
			printf("Invalid Choise: \n");
			printf("Press Any Key To Continue :");
			getch();
			break;
		}
	}

}