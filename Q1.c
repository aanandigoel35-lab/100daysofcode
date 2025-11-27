#include <stdio.h>

int main() {
    int num1, num2, sum; // Declare integer variables to store the numbers and their sum

    printf("Enter the first number: "); // Prompt the user to enter the first number
    scanf("%d", &num1); // Read the first integer input from the user and store it in num1

    printf("Enter the second number: "); // Prompt the user to enter the second number
    scanf("%d", &num2); // Read the second integer input from the user and store it in num2

    sum = num1 + num2; // Calculate the sum of the two numbers

    printf("The sum of %d and %d is %d\n", num1, num2, sum); // Display the result

    return 0; // Indicate successful program execution
}
