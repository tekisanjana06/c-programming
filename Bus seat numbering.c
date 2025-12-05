#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N >= 1 && N <= 15) {
        // Lower deck
        if (N >= 11 && N <= 15)
            printf("Lower Single");
        else
            printf("Lower Double");
    } 
    else {
        // Upper deck (16 to 30)
        if (N >= 26 && N <= 30)
            printf("Upper Single");
        else
            printf("Upper Double");
    }

    return 0;
}


