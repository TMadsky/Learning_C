#include <stdio.h>

int main(){
    float arr[5];
    
    for(int i = 0; i <5; i++){
        printf("Please Enter %d. Number: ", i+1);
        scanf("%f", &arr[i]);
    }
    float max, min = arr[0];
   

    for(int i = 1; i< 5; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("Max %.2f\n", max);
    printf("Min %.2f\n", min); 
    return 0;
}