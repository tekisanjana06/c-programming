#include <stdio.h>

int main() {
    int units;
    float amount, surcharge, total;

    scanf("%d", &units);

    // Calculate base amount
    if (units <= 199)
        amount = units * 1.20;
    else if (units >= 200 && units < 400)
        amount = units * 1.50;
    else if (units >= 400 && units < 600)
        amount = units * 1.80;
    else
        amount = units * 2.00;

    // Apply surcharge rules
    if (amount > 400)
        surcharge = amount * 0.15;
    else
        surcharge = 100.0;    // minimum surcharge

    total = amount + surcharge;

    printf("%.2f", total);

    return 0;
}


