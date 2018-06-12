#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 


void printer(); 


int main(int argc, char const *argv[]){

	int A[10] = {10 ,20 ,24, 12, 32, 45, 40, 20 ,40 ,40}; 
	int TorF = 1; 
	int input;
	int key; 


	printf("~~~~~Welcome to the Array Handler 5000~~~~~\n");
	printf("The Array we have to play with is : " );
	for(int i = 0; i < sizeof(A)/sizeof(int); i++){
		printf( "%d ",A[i]);
	} 

    while(TorF == 1 ){
    	printer();
    	scanf("%d", &input);

    	if (input == 1 ){
    		
    		printf("What is the key you would like to find the index for? \n");
    		scanf("%d", &key);
    		for(int x = 0; x < sizeof(A)/sizeof(int); x++){
    			if(key == A[x]){
    				printf("The index of the first occurance  of this key is: ");
    				printf("%d \n", x);
    				break;
    			}
    		}
    	}
    	
    	// This covers case 2 where the user would like to select how many times a specific key appears in the array. 
    	if (input == 2 ){
    		int count = 0; 
    		printf(" What is the key you would like to count the occurances of ? \n");
    		scanf("%d", &key);
    		for(int x = 0; x < sizeof(A)/sizeof(int); x++){
    			if(key == A[x]){
    				count ++; 
    			}	
    		}
    		printf("There are ");		
    		printf("%d",count);
    		printf(" instances of this key \n");
   		 }

   		// This covers case 3 where the user is allowed to selct and index of the array and change the key at that index. 
    	if (input == 3 ){
    		int index; 
    		int newKey;
    		printf("What index would you like to change the key at ?  \n");
    		scanf("%d", &index);
    		printf("What would you like the new Key value to be ? \n");
    		scanf("%d", &newKey);
    		A[index] = newKey; 
    		printf("All Done! \n");

    	}
    	// This scianario covers the case 4 and displays the full array at its current state. 
    	if (input == 4 ){
    		for(int i = 0; i < sizeof(A)/sizeof(int); i++){
				printf( "%d ",A[i]);
			}
    	}
    	printf("\n Do you want to continue? [1] yes [0] no ");
    	scanf("%d", &TorF);
    }

	printf("\n");
	return 0;
}

void printer(){
	printf("\n------Please Select From the Menu Below-----\n");
	printf("1) Get the index of certain key in array A \n");
	printf("2) Count the occurrences of certain key in array A\n");
	printf("3) Change the element at specific index in array A with the value of certain key. \n");
	printf("4) View array A \n");

}
