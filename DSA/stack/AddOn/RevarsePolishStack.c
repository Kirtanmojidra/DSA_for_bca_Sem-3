#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int Len(char *a){
	int i=0;
	while(a[i] != '\0'){
		i++;
	}
	return i;
}

int Stack[20];
int top=-1;

void Push(int data){
	top++;
	Stack[top] = data;
}

int Pop(){
	int data = Stack[top];
	top--;
	return data;
}
void main(){
	char PostFix[] = "12 100 - 200 - 2 * 10 /";
	int lenght = Len(PostFix);
	int num=0;
	int va1;
	int va2;
	int resulat = 0;
	for (int i = 0; i < lenght ; ++i)
	{  
		if(PostFix[i] == ' '){
			if(num != 0){
				Push(num);
			}
			
			num = 0;
		}
		else if(PostFix[i] == '-'){
			va1 = Pop();
			va2 = Pop();

			Push(va2-va1);
		}
		else if(PostFix[i] == '+'){
			va1 = Pop();
			va2 = Pop();

			Push(va2+va1);
		}
		else if(PostFix[i] == '*'){
			va1 = Pop();
			va2 = Pop();

			Push(va2*va1);
		}
		else if(PostFix[i] == '/'){
			va1 = Pop();
			va2 = Pop();

			Push(va2/va1);
		}
		else{
			num = num * 10 + (int)PostFix[i]-48;
			
			}
	}
	printf("\n PostFix : '%s'   resulat : %d\n",PostFix,Stack[0]);
}
