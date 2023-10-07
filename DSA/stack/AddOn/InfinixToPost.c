#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


char Stack[20];
int  top = -1;
int Len(char *arry){
	int i=0;
	while(arry[i]!='\0'){
		i++;
	}
	return i;
}

int Precedence(char op){
	if(op == '+' || op == '-'){
		return 1;
	}
	else if(op == '*' || op == '/'){
		return 2;
	}
	else{
		return -1;
	}
}
void Push(char data){
	top++;
	Stack[top] = data;
}

int Pop(){
	char data = Stack[top];
	top--;
	return data;
}

void InfinixToPofix(char *Infinix,int len){
	for(int i=0; i < len ; i++){
		if((Infinix[i] >= 'a' && Infinix[i] <= 'z')||(Infinix[i] >='A' && Infinix[i] <= 'Z')){
			printf(" %c ",Infinix[i]);
		}
		else if(Infinix[i] == '('){
			Push(Infinix[i]);
		}
		else if(Infinix[i] == ')'){
			while(Stack[top] != '('){
				printf(" %c",Stack[top]);
				Pop();
			}
			Pop();
		}
		else {
			while(Precedence(Stack[top]) > Precedence(Infinix[i]) ){
				printf(" %c ",Stack[top]);
				Pop();
			}
			Push(Infinix[i]);
		}
	}
	while(top != -1){
		printf(" %c",Stack[top]);
		Pop();
	}	
}

void main(){
	char Infinix[20] = "(a-b/c)*(a/k-l)";
	InfinixToPofix(Infinix,Len(Infinix));

}