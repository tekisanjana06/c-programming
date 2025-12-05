#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    if (X <= 3) {
        printf("BRONZE");
    }
    else if (X <= 6) {   // since X > 3 is already ensured
        printf("SILVER");
    }
    else {
        printf("GOLD");
    }

    return 0;
}

