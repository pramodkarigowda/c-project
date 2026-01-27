#include <stdio.h>
int biggest()
{
    int num1, num2;
    // Ask user to enter the two numbers
    printf("\nPlease Enter Two different values\n");
    // Read two numbers from the user
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("\n%d is Largest\n", num1);
    }
    else if (num2 > num1)
    {
        printf("\n%d is Largest\n", num2);
    }
    else
    {
        printf("Both are Equal\n");
    }
    return 0;
}
