#include <stdio.h>

int main() {
printf(" m    m               #               mmm                                    \n");
printf(" ##  ##  mmm    m mm  #   m         m'  '  mmm    mmmm  m   m   mmm   m mm   \n");
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
           printf("\n\n***** your receipt *****\n\n");
            while (1) {
                orderC++;
                sum+=prices[orders[orderC-1]];
                printf("%s -- %d Pesos\n", order[orders[orderC-1]], prices[orders[orderC-1]]);
            
                if (orderC == count) { 


                    printf("\nTotal amount due is: %d Pesos\n", sum);
                    int cash;
                    printf("::::::::::\n");
                    printf("Enter Cash: ");
                    scanf("%d", &cash);
                   if (cash < sum) {
                       printf("You have %d Pesos balance.\n", sum - cash);
                   } else {
                       printf("Change is: %d Pesos\n", cash - sum);
                   }
                    printf("::::::::::\n");
                   printf("\n\n****** thank you ******\n\n\n");

printf(" m    m               #               mmm                                    \n");
printf(" ##  ##  mmm    m mm  #   m         m'  '  mmm    mmmm  m   m   mmm   m mm   \n");
printf(" # ## # '   #   #'  ' # m'          #   mm '   #  #' '#  #   #  '   #  #'  # \n");
printf(" # '' # m'''#   #     #'#           #    # m'''#  #   #  #   #  m'''#  #   # \n");
printf(" #    # 'mm'#   #     #  'm          'mmm' 'mm'#  '#m'#  'mm'#  'mm'#  #   # \n");
printf("                                                   m  #                      \n");
printf("                                                    ''                       \n"); 
                    break;
                }
            }

            break;
        } else {
            count++;
            orders[count - 1] = temp -1;
        }
        printf("[Enter 99 to close and print the receipt] ");
    }
    return 0;
}
