#include <stdio.h>

int main() {
printf(" m    m               #               mmm                                    \n");
printf(" ##  ##  mmm    m mm  #   m         m'  '  mmm    mmmm  m   m   mmm   m mm  \n");
printf(" # ## # '   #   #'  ' # m'          #   mm '   #  #' '#  #   #  '   #  #'  # \n");
printf(" # '' # m'''#   #     #'#           #    # m'''#  #   #  #   #  m'''#  #   # \n");
printf(" #    # 'mm'#   #     #  'm          'mmm' 'mm'#  '#m'#  'mm'#  'mm'#  #   # \n");
printf("                                                   m  #                      \n");
printf("                                                    ''                       \n");

    printf("\n\n[Welcome to Wano Country Restaurant]\n\n");
    printf("Menu:\n");
    char order[][20] = {"Boiled Chicken", "Sashimi", "Takoyaki", "Mochi", "Onigiri", "Ramen", "Samba Beefs", "Bento", "Oden", "Chopper"};
    printf("1. 59₱ Boiled Chicken  2. 89₱ Sashimi\n3. 99₱ Takoyaki        4. 59₱ Mochi\n5. 79₱ Onigiri         6. 99₱ Ramen\n7. 99₱ Samba Beefs     8. 79₱ Bento\n9. 59₱ Oden            10. 99₱ Chopper\n\n");
    int prices[] = {59, 89, 99, 59, 79, 99, 99, 79, 59, 99};
    int orders[256];
    int sum =0;

    int count;
    while (1) {
        int temp;
        printf("Enter your order: ");
        scanf("%d", &temp);
        if (count > 0 && temp == 99) {

           // printf("%d", count);

            int orderC;
           printf("\n\n***** your receipt *****\n");
            while (1) {
                orderC++;
                sum+=prices[orders[orderC-1]];
                printf("%s -- %d\n", order[orderC], prices[orders[orderC-1]]);
            
                if (orderC == count) { 

printf("Total amount due is: %d Pesos\n", sum);
printf("****** thank you ******\n");
                    break;
                }
            }

            break;
        } else {
            count++;
            orders[count - 1] = temp -1;
        }
        printf("Enter 99 to close and print the receipt-- ");
    }
 /*
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
    */
    return 0;
}
