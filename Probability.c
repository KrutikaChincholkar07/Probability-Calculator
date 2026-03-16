#include <stdio.h>

int main() {
    float favorable, total, probability;

    printf("Enter number of favorable outcomes: ");
    scanf("%f", &favorable);

    printf("Enter total number of outcomes: ");
    scanf("%f", &total);

    probability = favorable / total;

    printf("Probability = %.4f", probability);

    return 0;
}
