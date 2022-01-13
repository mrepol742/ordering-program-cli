#include<stdio.h>
#include<stdlib.h>

int totalSum = 0;

int main(){
	int price[88] = {90, 20, 30, 20, 50, 50, 40, 40, 60, 70, 30};
	char itemName[][88] = {"Chocolate cake", "Fries", "Pasta", "Popcorn", "loaf", "mocha bubble tea", "house bubble tea", "grass jelly", "almond milk tea", "cream cheese float", "coke float"};
	
	printf("\t=Welcome in Swer-tea=\n");
	printf("Here's our Menu:\n\n");
	printf("=Meals=\n\n1. Chocolate cake - 90.00\n2. Fries - 20.00\n3. Pasta - 30.00\n4. Popcorn - 20.00\n5. loaf - 50.00\n\n=DRINKS=\n\n6. mocha bubble tea - 50.00\n7. house bubble tea - 40.00\n8. grass jelly - 40.00\n9. almond milk tea - 60.00\n10. cream cheese float - 70.00\n11. coke float - 30.00\n12. Exit");
	
	int order[99];
	int count;

	while (1){
        count++;
        int select;
        order[count] = select -1;
		if (select <= 0) {
			printf("\n\nEnter the number of your choice --> ");
		} else {
			printf("\nanything else --> ");		
		}
	//	printf("\n%d\n", order[select]+1);
	    scanf("%d",&select);
	    if (select == 12) {
            printf("\n\t____________________________________\n");
			printf("\n\t\tRECEIPT\n");

            for (int i = 0; i < count; i++) {
				int curr = order[i+1]+1;
				if (curr != 0) {
              //   printf("%d", curr);
			  totalSum += price[curr-1];
			  printf("\t\t%s --> %d\n", itemName[curr-1], price[curr-1]);
				}
				if (i == count-1) {
					printf("\t\tTotal Amount Due : %d\n", totalSum);
				}
			}

			
			printf("\n\t____________________________________\n");

		    printf("\n\t____________________________________\n");
		    printf("\n\tTHANK YOU FOR CHOOSING SWER-TEA");
		    printf("\n\t____________________________________\n");
		    break;
	    }
	}
}