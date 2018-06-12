#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 


int main(int argc, char const *argv[]){

	int A[10] = {10 ,20 ,24, 12, 32, 45, 40, 20 ,40 ,40}; 


	printf("~~~~~Welcome to the Array Handler 5000~~~~~\n");
	printf("The Array we have to play with is : " );
	for(int i = 0; i < sizeof(A)/sizeof(int); i++){
		printf( "%d ",A[i]);
	} 
	printf("\n------Please Select From the Menu Below-----\n");
	printf("1) Get the index of certain key in array A \n");
	printf("2) Count the occurrences of certain key in array A\n");
	printf("3) Change the element at specific index in array A with the value of certain key. \n");
	printf( "4) View array A \n");
	int input;
    scanf("%d", &input);

	printf("\n");








	
	return 0;
}

