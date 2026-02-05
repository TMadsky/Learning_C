#include <stdio.h>
float Calculator(float fNumb, float sNum)
{
    int choice;
    printf("---------------------\n");
    printf("Welcome To Calculator\n");
    printf("---------------------\n");
    printf("Enter First Number :");
    scanf("%f", &fNumb);
    printf("Enter Second Number :");
    scanf("%f", &sNum);
    printf("Sellect Your Number For Operation:\n");
    printf("1- Addition\n");
    printf("2- Substraction\n");        
    printf("3- Multiplication\n");
    printf("4- Dividing\n");
    scanf("%d", &choice);
    if(choice == 1)
    {
            return fNumb + sNum;
    }
    else if(choice == 2)
    {
            return fNumb - sNum;
    }
    else if(choice == 3)
    {
            return fNumb * sNum;
    }
    else if(choice == 4)
    {
            return fNumb / sNum;
    }
    else
    {
            printf("Invalid Choice");
            return 0;
    }
}
float EvenOddChecker(int number)
{
    if(number % 2 == 0)
    {
            printf("%d is Even Number", number);
    }
    else
    {
            printf("%d is Odd Number", number);
    }
}

float AreOfCircleCalculator(float radius)
{
    printf("Enter The Radius Of Circle :");
    scanf("%f", &radius);
    return 3.14 * radius * radius;
}
float TemperatureConverter(float temp)
{
    int choice;
    printf("Enter The Temperature :");
    scanf("%f", &temp);
    printf("Sellect Your Number For Operation:\n");
    printf("1- Celsius To Fahrenheit\n");
    printf("2- Fahrenheit To Celsius\n");        
    scanf("%d", &choice);
    if(choice == 1)
    {
        return (temp * 9/5) + 32;
    }
        else if(choice == 2)
    {
        return (temp - 32) * 5/9;
    }
    else
    {
        printf("Invalid Choice");
        return 0;
    }
}
int main(){
    int choice2;
    printf("Welcome My Learning Project Page In Order To Learn C Language\n");
    printf("My Projects:\n");
    printf("1- Calculator\n");
    printf("2- Even Odd Checker\n");
    printf("3- Area Of Circle Calculator\n");
    printf("4- Temperature Converter\n");
    printf("Enter Your Choice :");
    scanf("%d", &choice2);
    if(choice2 == 1)
    {
        float fNumb, sNum;
        float result = Calculator(fNumb, sNum);
        printf("Result: %.1f", result);
    }
    else if(choice2 == 2)
    {
        int number;
        printf("Enter A Number :");
        scanf("%d", &number);
        EvenOddChecker(number);
    }
    else if(choice2 == 3)
    {
        float radius;
        float area = AreOfCircleCalculator(radius);
        printf("Area Of Circle: %.1f", area);
    }
    else
    {
        printf("Invalid Choice");
        return 0;
    }
    
return 0;
}