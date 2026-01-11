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
    while(true){
    int productCount = pC;   
    printf("Press 1 for adding a new product\n");
    printf("Press 2 for viewing products");
    printf("Press 3 for exiting ");
    int i
    if(i=1){
    struct product product1;
    producta(&product1);


    printf("Product Id :%d\n",product1.id);
    printf("Product Name :%d\n",product1.name);
    printf("Product Price :%d\n",product1.price);
    pC=pC+1;
    }
    if(i=2){
    int arr[];    
    printf("Product Id :%d\n",product1.id);
    printf("Product Name :%d\n",product1.name);
    printf("Product Price :%d\n",product1.price);
    }
    if(i=3){
        break();
    }
    else{
        printf("Unidentified Number Please Try Again\n");
    }
    }
    
}