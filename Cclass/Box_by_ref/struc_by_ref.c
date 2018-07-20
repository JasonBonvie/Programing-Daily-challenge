#include <stdio.h>
#include <string.h>
#include <math.h>

// How the "box" structure is formed 
struct Box{
	char *name; 
	int length;
	int width;
	int height; 
	int area;
	int parameter;

};
void printBox(struct Box b);
void computeBox(struct Box *B);
int compareBox(struct Box a, struct Box b);

int main(){
	struct Box R1 = {"Rec1", 17, 3, 4, 0, 0 };
	struct Box R2 = {"Rec2", 15, 2, 5, 0, 0 };
	computeBox(&R1);
	computeBox(&R2);
	printBox(R1);
	printBox(R2);
	printf("%d\n",compareBox(R1,R2)); 

}
// takes in a referance to the box structure 
void computeBox(struct Box *B){
	// pointers are used to show the locations of the box information 
	 B->area = B->length*B->width*B->height; 
	 B->parameter = B->length*2+B->width*2; 
};

void printBox(struct Box b){
	// this prints the box information 
	printf("~~~~ YOUR BOX ~~~~ \nThe Name is: %s\n",b.name);
	printf("The length is: %d\n",b.length);
	printf("The width is: %d\n",b.width);
	printf("The height is: %d\n",b.height);
	printf("The area is: %d\n",b.area);
	printf("The parameter is: %d\n",b.parameter);
	
};
// compares the boxes and returns information as requested 
int compareBox(struct Box r1, struct Box r2){
	if(r1.area > r2.area){
		return 1;
	}
	if(r1.area == r2.area){
		return 0;
	}
	else{
		return -1;
	}
}