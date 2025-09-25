#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    // 12 x 4 = 48 / 4 = 12 bytes
    for(int i=0; i<size; i++){
        printf("%i ", arr[i]);
    }
    printf("\n");
    for(int i=1; i<=10; i+=2){ // Loop Variable
        printf("%d ", i);
    }
    int array[5] = {1,2}; // 1,2,0,0,0
    // 12 bytes or 3 blocks wasted
    printf("\n%d\n", array[4]);
    return 0;
}