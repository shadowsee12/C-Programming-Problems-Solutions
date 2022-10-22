#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1, num2, choice;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter Your Choice 1,2,3 or 4: ");
    scanf("%d",&choice);
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    switch(choice)
    {
        case 1:
        printf("The sum is: %d",num1+num2);
        break;
        case 2:
        printf("The Subtraction is: %d",num1-num2);
        break;
        case 3:
        printf("The multiplication is: %d",num1*num2);
        break;
        case 4:
        printf("The division is: %f",(float)num1/num2);
        break;
        case 5:
        printf("Exited!!");
        exit(0);
        break;
        default:
        printf("Wrong Choice");
    }
}