#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void welcome(); 
float sum(float A , float B);
float sub(float A, float B);
float mult(float A, float B);
double powe(float A, float B);
float fact(float A, float B);


int main(){
     welcome();
     return 0 ; 
}

void welcome(){
	while(1 == 1 ){
		float A;
		float B;
		char Op = 'k';
		static float result = 0; 
		printf("~~~~~~~Welcome to the calculator 5000~~~~~~~\n");
		printf("The current previous result is %f\n", result );
		printf("Please select and option\n");
		printf("[1] Insert two operands (A and B) and an operator\n");
		printf("[2] Use the Previous result as operand A, insert operand B and an operator\n");
		int selection;
		scanf("%d", &selection);
		if (selection == 1){

			printf("Please enter operator A: \n");
			scanf("%f", &A);
			printf("Please enter operator B: \n"); 
			scanf("%f", &B);
			printf("Please enter the operation you would like to preform. \n");
			scanf("%s", &Op);
			printf("%c", Op );


			if (Op == '+'){
				result = sum(A,B);
				printf("The sum is : %f\n", result);
			}
			if (Op == '-'){
				result = sub(A,B);
				printf("The differance is : %f\n", result);
			}
			if (Op == '*'){
				result = mult(A,B);
				printf("The product is : %f\n", result);
			}
			if (Op == 'P'){
				result = powe(A,B);
				printf("The A raised to the power B is : %f\n", result);
			}
			if (Op == '!'){
				result = fact(A,B);
				printf("The factorial of A + B (where the factorial of N = 1 x 2 x 3 x 4 x ... x N) %f\n", fact(A,B));
			}
		}

		if (selection == 2){

			printf("Please enter operator B: \n"); 
			scanf("%f", &B);
			printf("Please enter the operation you would like to preform. \n");
			scanf("%s", &Op);
			printf("%c", Op );
	        if (Op == '+'){
				result = sum(result,B);
				printf("The sum is : %f\n", result);
			}
			if (Op == '-'){
				result = sub(result,B);
				printf("The differance is : %f\n", result);
			}
			if (Op == '*'){
				result = mult(result,B);
				printf("The product is : %f\n", result);
			}
			if (Op == 'P'){
				result = powe(result,B);
				printf("The A raised to the power B is : %f\n", result);
			}
			if (Op == '!'){
				result = fact(result,B);
				printf("The factorial of A + B (where the factorial of N = 1 x 2 x 3 x 4 x ... x N) %f\n", result);
			}
		}
	}

}

float sum(float A , float B){
	float sum; 
	sum = A + B; 
	return sum; 
}

float sub(float A, float B){
	float sub; 
	sub = A - B; 
	return sub; 
}
float mult(float A, float B){
	float mult;
	mult = A * B;
	return mult; 
}
double powe(float A, float B){
	double a; 
	double b; 
	double p; 
	a = (double)A; 
	b = (double)B; 
	p = pow(a, b);  
	return p;
}
float fact(float A, float B){
	float N = A + B; 
	float factorial = 1; 
	for (int i = 1; i <= N; i++){
		factorial *= i;
	}
	return factorial; 
}

