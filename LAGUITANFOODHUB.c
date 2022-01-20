#include <stdio.h>

int orderList[99];

int main() {
    printf("------------------------------\n");
    printf("------                  ------\n");
    printf("--    Laguitan Food Hub     --\n");
    printf("------                  ------\n");
    printf("------------------------------\n\n\n");
    printf("-- MENU --\n");
    char order[][99] = {"Loaded Potato", "Loaded Mac & Cheese", "Loaded Nachos", "Smoked Turkey Sandwich", "Sausage Sandwich", "Pulled Pork Sandwich", "Chopped Brisket Sandwich", "Turkey Grilled Cheese", "Chicken Grilled Cheese"};
    printf("Limited Time Offer --- 99.00 Pesos\n");
    printf("[1] Loaded Potato\t\t[2] Loaded Mac & Cheese\n[3] Loaded Nachos\t\t[4] Smoked Turkey Sandwich\n[5] Sausage Sandwich\t\t[6] Pulled Pork Sandwich\n[7] Chopped Brisket Sandwich\t[8] Turkey Grilled Cheese\n[9] Chicken Grilled Cheese\t[0] Close Menu\n");
    printf("----------\n\n");
    int inp = 0;
    int orderCount = 0;
    while (1) {
        if (inp ==0) {
        printf("Input your order: ");
        } else {
            printf("Input another order: ");
        }
        scanf("%d", &inp);
        orderList[orderCount] = inp;
       // printf("%s", order[inp-1]);
        if (inp == 0) {
            printf("------------------------------\n");
            printf("------                  ------\n");
            printf("--         RECEIPT          --\n");
            printf("------                  ------\n");
            for (int i = 0; i < orderCount; i++) {
                printf("[%d] %s\n", i+1,  order[orderList[i]-1]);
            }
            printf("--------------------------------");
            printf("\n\t%d items * 99.00 Pesos\n\tTotal Amount Due is: %d Pesos\n\n", orderCount, orderCount * 99);
            printf("------------------------------\n");
            printf("------                  ------\n");
            printf("--        THANK YOU         --\n");
            printf("------                  ------\n");
            printf("------------------------------\n");
            break;
        } else {
             orderCount++;
        }
    }
    return 0;
}