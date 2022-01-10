#include <stdio.h>

int main() {
    printf("\tRamen Ichiraku");
    printf("Dattebayo:\n");
    char menu[][20] = {"1. Ichiraku ramen", "2. Red Bean Soup", "3. Zenzai", "4. Cinnamon Rolls", "5. Sashimi"};
    printf("\t1. Ichiraku ramen\n\t2. Red Bean Soup\n\t3. Zenzai\n\t4. Cinnamon Rolls\n\t5. Sashimi");
    int price[] = {20, 30, 29, 35, 20};
    printf("\n\nFirst order: ");
    int first;
    scanf("%d", &first);
    printf("Second order: ");
    int second;
    scanf("%d", &second);
    int total = price[first-1] + price[second-1];
    printf("\nYour receipt:");
    int i, j;
    for (i = 0; i < 10; i++) {
        if (i == (first-1)) {
            printf("\n%s -- %d", menu[i], price[i]);
        }
    }
    for (j = 0; j < 10; j++) {
        if (j == (second-1)) {
            printf("\n%s -- %d", menu[j], price[j]);
        }
    }
    printf("\nTotal Sum: %d\n", total);
    
    return 0;
}