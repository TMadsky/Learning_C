#include <stdio.h>

int main(){
    printf("---------------------\n");
    printf("Welcome To Calculator\n");
    printf("---------------------\n");

    printf("Enter First Number :");
    float first;
    scanf("%f", &first);

    printf("Enter Second Number :");
    float second;
    scanf("%f", &second);



    float Ad = first+second;
    printf("Addition: %.1f", Ad);

    float Sub = first-second;
    printf("\nSubstraction: %.1f", Sub);

    float Div = first/second;
    printf("\nDividing: %.1f", Div);

    float Mul = first*second;
    printf("\nMultiplication: %.1f", Mul);
}