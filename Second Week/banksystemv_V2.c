#include <stdio.h>
struct AccountCreate{
    char AccName[50];
    int AccNumber;
    float AccBalance;
    int password;
};

void AddAcc(struct AccountCreate *acc){
    printf("Enter An Account Name: \n");
    scanf("%s", acc->AccName);
    printf("Enter An Account Number: \n");
    scanf("%d", &acc->AccNumber);
    printf("Enter A Balance: \n");
    scanf("%f", &acc->AccBalance);

while(1){
    printf("Create A Password(only number): \n");
    scanf("%d", &acc->password);
int password1 = acc->password;
int password2;
    printf("Enter Password x2\n");
    scanf("%d", &password2);
if(password1==password2){
    printf("Your Account Created");
break;
}
else{
    printf("Your first password doesn't maches to secound one please try again\n");
}
}
}

int PassVerification(struct AccountCreate *acc){//!todo Passowrd Verification
int ps;
int Access = 0;
for(int i = 3;i > 0; i--){
    printf("Please Enter Your Password:\n");
    scanf("%d",&ps);

if(ps != acc->password){
    printf("Wrong Password try again %d left", i);
}

else{
    printf("Access Granted");
Access=1;
break;
}
}
return Access;
}

int main(){//!MAIN
int choice = 0;
int HaveAcc = 0;
struct AccountCreate acc1 = {"None", 0, 0.0f};
while(1){
    printf("----------------------------");
    printf("Welcome To Bank System V2!");
    printf("----------------------------\n");

    printf("Press 1 If you want to create an account\n");
    printf("Press 2 If you want to deposit money in to the account\n");
    printf("Press 3 If you want to withdraw money out off the account\n");
    printf("Press 4 If you want to veiw your account\n");
    printf("Press 5 If you want to leave our system\n");
    scanf("%d", &choice);
if(choice == 1){//!todo Create



 if(HaveAcc==1){
    printf("You Alreade Have An Account Please Continue With Your Account\n");
 }
 else{
AddAcc(&acc1);
HaveAcc=1;
 }

}





else if(choice == 2){//!todo Deposit
 if(HaveAcc==0){
    printf("You don't have account please create one\n");   
 }
 else{
if(PassVerification(&acc1)){
float newBalance;
    printf("Your Current Balance: %.2f\n", acc1.AccBalance);
    printf("Please enter the balance you want to deposit\n");
    scanf("%f", &newBalance);
    printf("The amount transfering to your account %0.2f\n", newBalance);
acc1.AccBalance+=newBalance;
    printf("You Succesfully Deposited Money Your New Balance: %.2f\n", acc1.AccBalance);
 }
 else{
    printf("Wrong Password Try Again\n");
};
}

}







else if(choice == 3){//!todo Withdraw
if (HaveAcc==0){
    printf("Please Create An Account\n");
}
else{

float newBalance;
if(PassVerification(&acc1)){
    while(1){
 printf("Your Current Balance: %.2f\n", acc1.AccBalance);
    printf("Please Enter the amount of money you want to withdraw\n");
    scanf("%f",&newBalance);
if(newBalance > acc1.AccBalance){
    printf("You don't have that much money please enter smaller amount\n");
}
else{
    printf("You are withdrawing %0.2f",newBalance);
acc1.AccBalance-=newBalance;
    printf("You Succesfully withdrawed money your current balance: %.2f\n", acc1.AccBalance);
break;
}
}
}
}
}





else if(choice == 4){//!todo View
if(HaveAcc==0){
    printf("You Don't Have An Account Please Create One\n");
}
else{
    printf("Your Accounts Name: %s\n", acc1.AccName);
    printf("Your Accounts Number: %d\n", acc1.AccNumber);
    printf("Your Accounts Balance: %0.2f\n", acc1.AccBalance);
}
}




else if(choice ==5 ){
    printf("Thank You For Using Our Bank!\n");
    break;
}
}
    
}