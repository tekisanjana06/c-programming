#include <stdio.h>

int main() {
    int A[3], B[3];

    scanf("%d %d %d %d %d %d", &A[0], &A[1], &A[2], &B[0], &B[1], &B[2]);
https://maya.technicalhub.io/owl-program-details/66ecff1bf35c8f88bcc2bfab#
    // Sort Alice's rolls
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (A[i] > A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    // Sort Bob's rolls
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (B[i] > B[j]) {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    int alice_score = A[1] + A[2];
    int bob_score = B[1] + B[2];

    if (alice_score > bob_score)
        printf("Alice");
    else if (bob_score > alice_score)
        printf("Bob");
    else
        printf("Tie");

    return 0;
}



