#include <stdio.h>
void PrintArray(int* a){
    int i;
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
}

int SelectionSort(int* a){ 
    int midIndex;
    for(int i=0;i<6;i++){
        midIndex = i;
        for(int j=i;j<6;j++){
            if(a[j] < a[midIndex]){
                midIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[midIndex];
        a[midIndex] = temp;
    }
    return 0;
}

void main(){
    int arry[6]={1001,2,109,5,4,6};
    SelectionSort(arry);
    PrintArray(arry);
}