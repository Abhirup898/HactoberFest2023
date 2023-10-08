#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Get the value of N from the user
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Input N numbers from the user and calculate their sum
    for (int i = 1; i <= n; ++i) {
        double num;
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        sum += num;
    }

    // Display the sum
    printf("Sum = %.2lf\n", sum);

    return 0;
}
