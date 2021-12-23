#include <stdio.h>

int main() {
    printf("[Welcome to Wano Country Restaurant]\n\n");
    printf("Menu:\n");
    char order[][20] = {"Boiled Chicken", "Sashimi", "Takoyaki", "Mochi", "Onigiri", "Ramen", "Samba Beefs", "Bento", "Oden", "Chopper"};
    printf("1. 59₱ Boiled Chicken  2. 89₱ Sashimi\n3. 99₱ Takoyaki        4. 59₱ Mochi\n5. 79₱ Onigiri         6. 99₱ Ramen\n7. 99₱ Samba Beefs     8. 79₱ Bento\n9. 59₱ Oden            10. 99₱ Chopper\n\n");
    int prices[] = {59, 89, 99, 59, 79, 99, 99, 79, 59, 99};
    printf("\n\nEnter your order: ");
    int firstOrder;
    scanf("%d", &firstOrder);
    printf("Enter your second order: ");
    int secondOrder;
    scanf("%d", &secondOrder);
    int sum = prices[firstOrder-1] + prices[secondOrder-1];
    printf("\nYour receipt:");
    int i, j;
    for (i = 0; i < 10; i++) {
        if (i == (firstOrder-1)) {
            printf("\n%d₱ %s", prices[i], order[i]);
        }
    }
    for (j = 0; j < 10; j++) {
        if (j == (secondOrder-1)) {
            printf("\n%d₱ %s", prices[j], order[j]);
        }
    }
    printf("\n________\n%d Total Amount\n", sum);
    
    return 0;
}