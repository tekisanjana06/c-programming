#include <stdio.h>

int main() {
    int N;

    // Read the number of people in the team
    scanf("%d", &N);

    // Check eligibility
    if (N >= 6 && N <= 8) {
        printf("Yes
");
    } else {
        printf("No
");
    }

    return 0;
}




