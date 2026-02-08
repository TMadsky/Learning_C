#include <stdio.h>
#include <string.h>
struct acCreate{
    char aCName[50];
    int aCNumber;
    float aCbalance;
    char aCPassword[20];
};


void addaC(struct acCreate *acc){
int Hc = 1;
char p2[20];
    printf("Please Enter Your Account Name\n");
    scanf("%s", acc -> aCName);
    printf("Please Enter Your Accounts Number\n");
    scanf("%d", &acc-> aCNumber);
    printf("Please Enter Your Accounts Balance\n");
    scanf("%f", &acc-> aCbalance);

while(1){
    printf("Please Enter Your Accounts Password(Max 20 Digits)\n");
char p1;
    scanf("%s", acc-> aCPassword);
    printf("Please Enter Your Accounts Password x2\n");
    scanf("%s",p2);
if(strcmp(p2, acc->aCPassword) == 0){
    printf("Your Account Is Created\n");
Hc=1;
break;
}
else{
    printf("Passwords Doesn't Maches Try Again\n");
Hc=0;
}
}//*loop
}//*end



int pswdc(struct acCreate *acc){
char pss1[20];
    printf("For Next Opeation Please Confirm Your Password\n");
for(int i = 3; i>0; i--){
    scanf("%s", pss1);
if(strcmp(pss1, acc->aCPassword) == 1){
    printf("Wrong Password Try Again %d Attempt Left\n", i);

}
else{
    printf("Access Granted\n");
    return 1;
}
}//*loop
    printf("Too Many Failed Attems\n");
return 0;
}//*end




void receipt(float amount, char *name, int number, float balance){
char uReceiptName[50];
char ReceiptName[55];

    printf("Please Enter Recepit Name:\n");
    scanf("%s", uReceiptName);
    sprintf(ReceiptName, "%s.txt", uReceiptName);

FILE *Receipt = fopen(ReceiptName, "w");
    if(Receipt != NULL){
        fprintf(Receipt, "Account Name: %s\n", name);
        fprintf(Receipt, "Account Number: %d\n", number);
        fprintf(Receipt, "Transaction Amount: %.2f\n", amount);
        fprintf(Receipt, "Account Balalnce: %.2f\n", balance);
fclose(Receipt);
        printf("Receipt Saved As %s\n", ReceiptName);
    }
}


int main(){//!MAIN
int r;
int choice;
int Hc=0;
struct acCreate acc1= {"None", 0, 0.0f, "0000"};
while(1){
 
    printf("-------------------");
    printf("Welcome To X bank");
    printf("-------------------\n");

    printf("Select The Operation You Want To Do\n");
    printf("Press 1 for creating an account\n");//*--------------------Done
    printf("Press 2 for viewing your account\n");//*-------------------Done
    printf("Press 3 for depositing to your account\n");//*-------------Done
    printf("Press 4 for withdrawing from your account\n");//*----------Done
    printf("Press 5 for leaving our system\n");//*---------------------Done
    scanf("%d", &choice);


if(choice == 1){//!todo Create Account
if(Hc == 1){
    printf("You Already H<ave An Account\n");
Hc = 1;
}
else{
addaC(&acc1);
Hc = 1;
}
}



else if(choice == 2){//!todo View Account
    printf("Account Name: %s\n", acc1.aCName);
    printf("Account Number: %d\n", acc1.aCNumber);
    printf("Account Balance: %0.2f\n", acc1.aCbalance);
}



else if(choice == 3){//!todo Deposit To Account
if(Hc==0){
    printf("You Don't Have An Account First Create One\n");
}
else{
if(pswdc(&acc1)){
float Nbalance;
    printf("Your Current Balance: %.2f\n", acc1.aCbalance);
    printf("Enter Amunt Of Money You Want To Deposit\n");
    scanf("%f", &Nbalance);
float re;
re = Nbalance;
acc1.aCbalance+=Nbalance;
    printf("Your Successfuly Deposited To Your Account Your New Balance: %.2f\n", acc1.aCbalance);
    printf("If You Want Recepit Press 1 If You Don't Want A Recepit Press 2: ");
    scanf("%d", &r);
if(r == 1){
receipt(re, acc1.aCName, acc1.aCNumber, acc1.aCbalance);
}
}
}
}


else if(choice == 4){//!todo Withdraw From Account
if(Hc==0){
    printf("You Don't Have An Account First Create One\n");
}
else{
if(pswdc(&acc1)){
while(1){
float Nbalance;
    printf("Your Current Balance: %.2f\n", acc1.aCbalance);
    printf("Enter Amunt Of Money You Want To Withdraw\n");
    scanf("%f", &Nbalance);
float re;
re = Nbalance;
if(Nbalance>acc1.aCbalance){
    printf("You Don't Have That Much Money Please Change Amount Of Money You Want To Withdraw\n");
}
else{
acc1.aCbalance-=Nbalance;
    printf("Your Successfuly Deposited To Your Account Your New Balance: %.2f\n", acc1.aCbalance);
    printf("If You Want Recepit Press 1 If You Don't Want A Recepit Press 2\n");
    scanf("%d", &r);
if(r == 1){
receipt(re, acc1.aCName, acc1.aCNumber, acc1.aCbalance);
}
break;
}
}
}
}
}


else if(choice == 5){//!todo Exit
    printf("Thank You For Using X Bank\n");
break;
}
}//Loop
}//End