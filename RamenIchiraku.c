#include <stdio.h>

int main() {
    int first;
    int second;
    printf("\tRamen Ichiraku");
    printf("Dattebayo:\n");
    char menu[][20] = {"1. Ichiraku ramen", "2. Red Bean Soup", "3. Zenzai", "4. Cinnamon Rolls", "5. Sashimi"};
    int price[] = {20, 30, 29, 35, 20};
    printf("\t1. Ichiraku ramen\n\t2. Red Bean Soup\n\t3. Zenzai\n\t4. Cinnamon Rolls\n\t5. Sashimi");
    printf("\n\nFirst order: ");
    scanf("%d", &first);
    printf("Second order: ");
    scanf("%d", &second);
    printf("\tRECEIPT:");
    for (int i = 0; i < 5; i++) {
        int fi = (first-1);
        if (fi == i) {
            printf("\n%s -- %d", menu[i], price[i]);
        }
    }
    for (int j = 0; j < 5; j++) {
        int se = (second-1);
        if (se == j) {
            printf("\n%s -- %d", menu[j], price[j]);
        }
    }
     int total = price[first-1] + price[second-1];
    printf("\nTotal Sum: %d\n", total);
    
    return 0;
}