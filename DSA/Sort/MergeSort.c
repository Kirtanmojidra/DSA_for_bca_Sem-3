#include <stdio.h>
#include <conio.h>


void PrintArry(int* arry,int left,int end){

	for(int i=left;i<=end;i++){
		printf("%d ",arry[i]);
	}
	
	printf("\n");
}

void Merge(int* arry,int left,int mid,int right){

	int n1 = mid - left + 1;
	int n2 = right - mid;

	int a[n1];
	int b[n2];
	int n=0;
	for(int i=left;i<=mid;i++){
		a[n] = arry[i];
		n++;
	}
	n=0;
	for(int i=mid+1;i<=right;i++){
		b[n] = arry[i];
		n++;
	}

	int i=0,j=0,k=left;

	while(i<n1 && j<n2){
		if(a[i] < b[j]){
			arry[k]	= a[i];
			i++;
			k++;
		}
		else{
			arry[k] = b[j];
			j++;
			k++;
		}

	}
	while(i<n1){
		arry[k] = a[i];
		i++;
		k++;
	}
	
	while(j<n2){
		arry[k] = b[j];
		j++;
		k++;
	}

	
}

void mergeSort(int* arry,int left,int right){

	if(left<right){
		int mid = (left + right)/2;
		mergeSort(arry,left,mid);
		mergeSort(arry,mid+1,right);

		Merge(arry,left,mid,right);

	}
	
}

int main(){
	
	int arry[]={5,5,1,2,3};

	mergeSort(arry,0,4);

	PrintArry(arry,0,4);

	return 0;
}