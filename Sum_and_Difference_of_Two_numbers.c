#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int num1, num2;
    float num3, num4;

    // Read two integers from the first line of input
    printf("Enter two integers --> ");
    scanf("%d %d", &num1, &num2);

    // Read two floating-point numbers from the second line of input
    printf("Enter two float values --> ");
    scanf("%f %f", &num3, &num4);

    // Calculate the sum and difference for integers
    int sum_int = num1 + num2;
    int diff_int = num1 - num2;

    // Calculate the sum and difference for floating-point numbers
    float sum_float = num3 + num4;
    float diff_float = num3 - num4;

    // Print the results
    printf("Result --> ");
    printf("%d %d\n", sum_int, diff_int);
    printf("%.1f %.1f\n", sum_float, diff_float);

    return 0;
}
