#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// This code implemnt the finding algoorithm binary search.
int main(){
    void sort(int arr[] , int size);
    int b_search(int x, int arr[], int size);
    int arr[10] = {5,3,9,2,1,7,4,0,8,6}; 
    sort(arr, 10);
    for(int i = 0; i < 10; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("%d",b_search(7, arr, 10));
}


int b_search(int x, int arr[], int size){ // 1 2 3 4 5

    int low = 0;
    int high = size - 1;
    int mid;
    while(!(low  > high)){
        mid = (low + high) / 2;
        if(x < arr[mid])
            high = mid -1;
        
        else if(x > arr[mid])
            low = mid + 1;
        
        else
            return mid;
        
    }
    return - 1; // no match
}




// void sort(int arr[] , int size){
//     if(size == 0) return ;
//     int tmp = arr[0];

//     for(int i = 0; i < size; i++){
//         for(int j = i; j < size; j++){
//             if(arr[j] < arr[i]){
//                 tmp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = tmp;
//             }
//         }
//     }


// }

void sort(int arr[] , int size){
    if(size == 0) return;
    int smallest;
    int idx;

    for(int i = 0; i < size; i++){
        smallest = arr[i];
        idx = i;
        for(int j = i; j < size; j++){
            if(arr[j] < smallest){
                smallest = arr[j]; // 1 2 3 4 5
                idx = j; //j = 3;
                
            }
        }
        arr[idx] = arr[i];
        arr[i] = smallest;
    }

}

