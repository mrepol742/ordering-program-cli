#include<stdio.h>
#include<stdlib.h>

void menu();	
void order();

int main(){
	menu();
	return 0;
}

void menu()
{
	printf("\t        ___________________________\n");
	printf("\t           WELCOME IN SWER-TEA\n");
	printf("\n\t1. Order\n\t2. Exit ");
	printf("\n\n");
	
	int select;
	printf("\n\tEnter your choice---> ");
	scanf("%d",&select);
    
    if (select==1){
    	order();
	}
	else if (select==2){
		printf("\t        ___________________________\n");
		printf("\t\n FEEL HUNGRY COME AGAIN!\t\n");
		printf("\t        ___________________________\n");
		exit(0);
	}
}

void order() {

}