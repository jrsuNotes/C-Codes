#include <stdio.h>

void computeFactors(int num) {
    printf("Factors of %d are: ", num);

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    computeFactors(number);

    return 0;
}
