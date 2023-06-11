#include <stdio.h>

double computeSeriesSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double seriesSum = computeSeriesSum(n);
    printf("Sum of the series S = 1 + 1/2 + 1/3 + ... + 1/%d is %.2f\n", n, seriesSum);

    return 0;
}
