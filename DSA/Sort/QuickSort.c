#include <stdio.h>


void PrintArry(int* arry,int end){

	for(int i=0;i<end;i++){
		printf("%d",arry[i]);
	}

}

int partition(int* arry,int start,int end){

	int i=start-1,j,pivot;
	pivot = arry[end];

	for(j = start ; j < end ; j++){

		if(arry[j]<pivot){
			i++;
			int temp = arry[j];
			arry[j]=arry[i];
			arry[i]=temp;
		}
	}

	arry[end] = arry[i+1];
	arry[i+1] = pivot;

	return i+1;
}

void QuickSort(int* arry,int left,int end){

	if(left<end){
		int pivot = partition(arry,left,end);
		QuickSort(arry,left,pivot-1);
		QuickSort(arry,pivot+1,end);
	}
}

int main()
{
	int arry[6]={2,4,6,1,7};
	QuickSort(arry,0,4);
	PrintArry(arry,5);
	return 0;

}
