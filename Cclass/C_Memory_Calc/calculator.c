#include <stdio.h>
#include <stdlib.h>

void welcome(); 


int main(){
     welcome();
     return 0 ; 

}

void welcome(){
	printf("~~~~~~~Welcome to the calculator 5000~~~~~~~\n");
	printf("Please select and option\n");
	printf("[1] Insert two operands (A and B) and an operator\n");
	printf("[2] Use the Previous result as operand A, insert operand B and an operator\n");
	int selection;
	scanf("%d", &selection);
	if (selection == 1){
		printf("ok\n"); 

	}
	if (selection == 2){
        printf("ok123\n"); 
	}

	




}