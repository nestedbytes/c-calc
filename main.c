#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{   
    char answer[10];
    char dump;

    
    do
    {
        char inputUser;
        float num1, num2, result;
        printf("Please enter what do you want to do (+ = sum | - = subtraction | * = multiplication | / = division |): ");
        scanf("%c",&inputUser);
    
        printf("Enter the first number: ");
        scanf("%f",&num1);
        printf("Enter the second number: ");
        scanf("%f",&num2);
        switch (inputUser)
        {
        case '+':
            printf("The Addition of %f and %f is %f\n",num1,num2,num1+num2);
            break;
        case '-':
            printf("The Subtraction of %f and %f is %f\n",num1,num2,num1-num2);
            break;
        case '*':
            printf("The Multiplication of %f and %f is %f\n",num1,num2,num1*num2);
            break;
        case '/':
            printf("The Division of %f and %f is %f\n",num1,num2,num1/num2);
            break;
        case '^':
            printf("The Result of %f ^ %f is %f\n",num1,num2,powf(num1,num2));
        default:
            printf("Invalid Operation,please try again!\n");
            break;
        }
        printf("Type yes to do another operation and no to quit :");
        scanf("%s",answer);
        dump = getchar();

    } while (strcmp(answer,"yes")  == 0);
    
    return 0;
}