#include <stdio.h> 
struct product{
    int id;
    char name[50];
    float price;
};

void producta(struct product * product){
    printf("Add Product");
    printf("Product Id: ");
    scanf("%d",&product->id);

    printf("Product Name: ");
    scanf("%s",product->name);

    printf("Product Price: ");
    scanf("%f",&product->price);

}

int main(){
    int pC = 0;//?ProductCount  
    int AaA; 
    struct product product1;
 while(1){
    
    printf("Press 1 for adding a new product\n");
    printf("Press 2 for viewing products\n");
    printf("Press 3 for exiting ");
    
    
    scanf("%d",&AaA);
    if(AaA == 1){
    
    producta(&product1);
    printf("\n\nProduct Id :%d\n",product1.id);
    printf("Product Name :%s\n",product1.name);
    printf("Product Price :%f\n",product1.price);
    pC=pC+1;
    }
    else if(AaA == 2){
    int arr[pC];    
    printf("Product Id :%d\n",product1.id);
    printf("Product Name :%s\n",product1.name);
    printf("Product Price :%f\n",product1.price);
    
    }
    else if(AaA == 3){
        break;
    }
    else{
        printf("Unidentified Number Please Try Again\n");
    };
    
    
}
 printf("You Have Been Exited Program"); 
   