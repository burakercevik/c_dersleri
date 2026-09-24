#include <stdio.h>

int main() {
    int counter;

    printf("Lutfen bir sayi girin: ");
    scanf("%d", &counter);

    if (counter < 1) {
        printf("Hatali sayi girdiniz!\n");
    } else {
        while (counter >= 1) {
            printf("Sayi: %d\n", counter);
            counter--;
        }
    }

    printf("Dongu sona erdi!\n");
    return 0;
}