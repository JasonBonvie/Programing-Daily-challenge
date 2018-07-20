#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool isValid(char barCode[]);

int main(int argc, char *argv[]){
	char serialcode1[] = "89238498723498KL";
	char serialcode2[] = "97083498SL";
	if( isValid (serialcode1) ){
		printf("serialcode 1 is valid code\n");
	}
	else{
		printf("serialcode 1 is invalid code\n");
	}

	if( isValid (serialcode2) ){
		printf("serialcode 2 is valid code\n");
	}
	else{
		printf("serialcode 2 isinvalid code\n");
	}
}



bool isValid(char barCode[]){
	// the two char lists below hold what we well be comparing portions fo the 
	// String to in order to verify if the codes are valid 
	char target[4];
	char dest[3]; 
	char sl [] = "SL";
	char nsz [] = "970";
	// This is how we compare the front of the char array 
	strncpy(target, barCode, 3);
	target[3] = '\0';
	// This is how we compare the end of the char array 
	strncpy(dest, barCode+strlen(barCode)-2 ,2);
	dest[2] = '\0';
	// printf("%s\n",dest );
	int count = 0 ; 


	// printing out each of the problems that a code may have if it is invalid. 
	if (strlen(barCode) < 8 || strlen(barCode) > 10){
		printf("This is an invalid serial number becase the code length is invalid\n");
		count ++; 
	}
	if (strcmp(dest, sl) != 0){
		printf("This is invalid becase the code does not end in SL\n" );
		count ++; 
	}
	if(strcmp(target, nsz) != 0  ){
		printf("This is an invalid serial number because it does not start with 970\n");
		count++ ;
	}
	if (count > 0){
		return false; 
	}
	return true; 

}