#include <stdio.h>

int main(){
    float UpPart;
    float MidPart;
    float DownPart;
    
    printf("Please Enter Upper Part");
    scanf("%f", &UpPart);

    printf("Please Enter Middle Part");
    scanf("%f", &MidPart);

    printf("Please Enter Lower Part");
    scanf("%f", &DownPart);
    
    for(float i = DownPart; i > UpPart; i= MidPart){
        printf("Current Value: %.2f\n", i);
    }

    return 0;
}