#include <stdio.h>

void PrintArray(int* a){
    int i;
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void InsertionSort(int* a){
	for(int i=1;i<6;i++){
		int j=i-1;
		int key=a[i];
		while(j>=0 && key<a[j]){
			PrintArray(a);
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}

void main(){
	int arry[6]={5,2,3,7,6,4};
	InsertionSort(arry);
	PrintArray(arry);
}