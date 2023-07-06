#include <stdio.h>

double add_floats(float num1, float num2) {
    return (double)(num1 + num2);
}

int main() {
    float num1 = 4.28;
    float num2 = 8.88;
    double result = add_floats(num1, num2);

    printf("The result of the addition is: %.2lf\n", result);

    return 0;
}
