#include <stdio.h>
int binarySearch(int* a,int key){
    int i;
    int low = 0;
    int len=5;
    int r=5;
    while(low<=r){
        int mid = (low + r )/2;
        if(a[mid] == key){
            printf("Key found at %d\n",mid);
            return 0;
        }
        else if(key > a[mid]){
            low = low + 1;
        }
        else{
            r=r-1;
        }
    }
}
//1,4,2,5,3 == 4   mid=2
void main(){
    int arry[5]={1,2,3,4,5};
    int key;
    printf("What do You Have To find ..... > ");
    scanf("%d",&key);
    binarySearch(arry,key);
}