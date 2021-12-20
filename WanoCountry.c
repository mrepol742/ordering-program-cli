#include <stdio.h>

int main() {
    printf("[Welcome to Wano Country Restaurant]\n\n");
    printf("Menu:\n");
    printf("1. 59₱ Boiled Chicken  2. 89₱ Sashimi\n3. 99₱ Takoyaki        4. 59₱ Mochi\n5. 79₱ Onigiri         6. 99₱ Ramen\n7. 99₱ Samba Beefs     8. 79₱ Bento\n9. 59₱ Oden            0. 99₱ Chopper\n\n");
    int prices[] = {59, 89, 99, 59, 99, 99, 79, 59, 99};
    prinf("\n\nEnter your order:");
    int firstOrder;
    scanf("%d", &firstOrder);
    printf("\nEnter your second order:");
    int secondOrder;
    scanf("%d", &secondOrder);
    int sum = firstOrder + secondOrder;
    printf("\n\nYour receipt: ");
    return 0;
}