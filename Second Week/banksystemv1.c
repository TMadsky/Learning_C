#include <stdio.h>

struct Account{
    int accountNumber;
    char name[50];
    float balance;
};

void addAccount(struct Account *account){
    printf("Enter Account Number:");
    scanf("%d", &account->accountNumber);
    
    printf("Enter Name:");
    scanf("%49s", account->name);

    printf("Enter Initial Balance:");
    scanf("%f", &account->balance);
}





int main(){//!MAIN
struct Account account1 = {0, "None", 0.0f};
int isCreated = 0;
int choice;

while(1){
    printf("------------------------");
    printf("Welcome To Bank System");
    printf("------------------------\n");
    printf("1- Create Account\n 2- Deposit Money\n 3- Withdraw Money\n 4- Check Account\n 5- Exit\n");
    printf("Enter Your Choice :");
    scanf("%d", &choice);
    printf("------------------------\n");
if(choice == 1)//!TODO CREATING ACCOUNT
{
    printf("You Crated An Account\n");
addAccount(&account1);
isCreated = 1;
}

else if(choice == 2)//!TODO DEPOSIT MONEY
{
float newBalance;
    printf("Your Current Balance: %.2f\n", account1.balance);
    printf("Please Enter Amount You Wish To Deposit: \n");
    scanf("%f", &newBalance);
    printf("New Current Balance: %.2f\n", account1.balance);
account1.balance += newBalance;

}


else if(choice == 3)//!TODO  WITHDRAW MONEY
{
float withDrawBalance;
    printf("Your Current Balance: %.2f\n", account1.balance);
    printf("Please Enter Amount Of Money You Want To Withdraw: ");
    scanf("%f", &withDrawBalance);
if(withDrawBalance > account1.balance){
    printf("The Amount You Trying To Withdraw is More Than Your Balance Please Enter Reasonable Amount");
}
account1.balance -= withDrawBalance;
    printf("New Balance: %.2f\n", account1.balance);
}


else if(choice == 4)//!TODO CHECK ACCOUNT
{
if(isCreated == 1){
    printf("Account Name: %s\n", account1.name);
    printf("Account Number: %d\n", account1.accountNumber);
    printf("Account Balance: %.2f\n", account1.balance);
}
else if(isCreated == 0){
    printf("You Dont Have An Account Please Create One\n");
}
else{
    printf("Unkwon Error Please Try Again!.");
return 0;
}
    
}

else if(choice == 5)//!TODO EXIT
{
    printf("Thank You For Using Our Bank System\n");
break;
}
else
{
    printf("Invalid Choice\n");
}
}
return 0;
}