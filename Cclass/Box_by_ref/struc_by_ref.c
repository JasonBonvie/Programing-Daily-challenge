#include <stdio.h>
#include <string.h>
#include <math.h>


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
	struct Box R1 = {"Rec1", 10, 3, 4, 0, 0 };
	struct Box R2 = {"Rec2", 15, 2, 5, 0, 0 };
	computeBox(&R1);
	computeBox(&R2);
	printBox(R1);
	printBox(R2);
}

void computeBox(struct Box *B){
	 B->area = B->length*B->width*B->height; 
	 B->parameter = B->length*2+B->width*2; 
};

void printBox(struct Box b){
	printf("%s\n",b.name);
	printf("%d\n",b.length);
	printf("%d\n",b.width);
	printf("%d\n",b.height);
	printf("%d\n",b.area);
	printf("%d\n",b.parameter);
	
};

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