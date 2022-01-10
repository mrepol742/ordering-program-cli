#include <stdio.h>
#include <time.h>

void delay(int ms);
void menu();
void input();
void receipt();

char food[][20] = {"Lemon Pie", "Iced Coffee", "Pork Cutlet Bowl", "Takiyaki", "Yaki Dango", "Ramen", "Onigiri", "Curry", "Pocky"};
int price[10] = {59, 49, 99, 79, 89, 59, 99, 59, 79};
int orders[99];

int main() {
    printf("--- Zero's Tea Time ---\n\n");
    delay(500);
    printf("Welcome to our restuarant!\n");
    delay(500);
    printf("Here's our menu:\n");
    delay(500);
    menu();
    printf("\nEnter the number you like to order: ");
    delay(500);
    input();
    
    return 0;
}

int length(int *p) { 
	int s = 0; 
	while(*p != '\0') { 
		s++; 
		p++; 
	} 
	return s; 
} 

void receipt() {
    int sum;
    for (int i = 0; i < 9; i++) {
        sum += orders[i] + i;
        printf("%d", orders[i]);
    }
    printf("\n\nThe total amount is %d", sum);
}

void input() {
    int i;
    while (2 < 3) {
        int or;
        scanf("%d", &or);
        orders[i] = or;
        printf("Append: %d", orders[i]);
        printf("Wanna add more? ");
        // if 0 reciept
        if (or == 0) {
            receipt();
            break;
        } else {
            i++;
            printf("food is %s orders is %d", food[orders[i]], orders[i]);
        }
    }
}

void menu() {
    int i;
    for (i = 0; i < 9; i++) {
        // TODO: warning format %s expects the argument of type char *
        // linux: suddenly the warning gone like it doesnt exists
        printf("%d. %s - %dP\n", i + 1, food[i], price[i]);
        delay(200);
    }
    printf("Enter '0' to finished the order.\n");
}

void delay(int ms) {
    long pe;
    clock_t now, then;
    pe = ms * (CLOCKS_PER_SEC/1000);
    now = then = clock();
    while((now-then) < pe) {
        now = clock();
    }
}
