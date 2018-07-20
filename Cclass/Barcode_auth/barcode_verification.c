#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


bool isValid(char barCode);

int main(){
	char serialcode1[] = "89238498723498KL";
	char serialcode2[] = "97083498SL";
	if( isValid (serialcode1) ){
		printf("serialcode 1 is valid code");
	}
	else{
		printf("serialcode 1 is invalid code");
	}

	if( isValid (serialcode2) ){
		printf("serialcode 2 is valid code");
	}
	else{
		printf("serialcode 2 isinvalid code");
	}
}



bool isValid(char barCode[]){
	char target[4];
	char nsz [] = '970';
	strncpy(target, barCode, 3);
	target[3] = '\0';

	if (sizeof(barCode) < 8 || sizeof(barCode) > 10){
		printf("This is an invalid serial number becase the code length is invalid");
	}
	if (target == nsz){
		printf("valid");
	}

	return true; 








}