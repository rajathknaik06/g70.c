/*Embark on a numerical adventure with David. Design a program to classify an input integer as positive, negative, or zero. 



Your goal is to determine the sign of the given number using relational and ternary operators and display the output.

Input format :
The input consists of an integer n, representing the number to be analyzed.

Output format :
The output displays the message "The number is [positive/negative/zero]" based on the analysis of the given number.*/


#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int sign = (number >= 0) ? 0 : 1;
    int isZero = (number == 0);

    printf("The number is %s\n", (isZero) ? "zero" : (sign == 0) ? "positive" : "negative");
    return 0;
}
