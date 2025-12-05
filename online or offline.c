#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // Calculate discounted online price
    float online_price = N * 0.9;

    if (online_price < M)
        printf("ONLINE");
    else if (online_price > M)
        printf("DINING");
    else
        printf("EITHER");

    return 0;
}

