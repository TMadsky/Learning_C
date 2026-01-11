#include <stdio.h> 
struct product{
    int id;
    char name;
    float price;
}

void producta(struct product * product){
    printf("Add Product");
    printf("Product Id: ");
    scanf("%d",&product -> id);

    printf("Product Name: ");
    scanf("%s",&product -> name);

    printf("Product Price: ");
    scanf("%f",&product -> price);
}

int main(){ 
    struct product product1;
    producta(&product1);

    printf("Product Id :%d\n",product1.id);
    printf("Product Name :%d\n",product1.name);
    printf("Product Price :%d\n",product1.price);
}