#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = (N * (N + 1)) / 2; // Formula for sum of first N natural numbers

    printf("%d", sum);

    return 0;
}


