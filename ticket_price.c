#include <stdio.h>

int main() {
    int counter;

    printf("Are you a student? (Press 1 for Yes, 0 for No: ");
    scanf("%d", &counter);

    if (counter == 1) {
        printf("Discounted ticket price: 20 TL\n");
    } else {
        if (counter == 0) {
            printf("Please enter your age: ");
            scanf("%d", &counter);

            if (counter <= 10) {
                printf("Ticket price: 50 TL\n");
            } else {
                if (counter > 10) {
                    printf("Ticket price: 100 TL\n");
                }
            }
        }
    }

    printf("Program finished successfully.\n");
    return 0;
}