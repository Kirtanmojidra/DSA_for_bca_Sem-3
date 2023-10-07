#include <stdio.h>
void PrintArray(int* a){
    int i;
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
}

int BubbleSort(int* a){
    for(int i=0;i<=6;i++){
        for(int j=0;j<=6;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void main(){
    int arry[6]={7,4,2,6,3,7};
    BubbleSort(arry);
    PrintArray(arry);
}