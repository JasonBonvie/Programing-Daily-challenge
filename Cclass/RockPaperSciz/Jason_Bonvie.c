#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Winner(int comp, int person);

int main(){
    srand(time(NULL));
    int play = 1; 
    printf("~~~~~~Welcome to RPS~~~~~\n \n");
    while (play == 1 ){
        printf("Please select one of the options below\n");
        printf("[0] For Rock \n[1] For Paper\n[2] For Scissors\n");
        int input;
        scanf("%d", &input);
        int random = rand() % 3; // this random will hold random number: 0,1 or 2
        Winner(input, random);
        printf("Want to play again?\n[1] Yes\n[0] No\n ~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        scanf("%d", &play);
    }
    return 0;
}
// this function covers all the possible rock paper scissors posibilites 
void Winner(int comp, int person){
    
    if (comp == person){
        printf("Both you and the robot chose the thing! Tie Game! \n");
    }

    if (comp == 0 &&  person == 1){
        printf("You lost, the robot chose paper and paper beats rock! \n");
    }

    if (comp == 0 &&  person == 2){
        printf("You won, the robot chose scissors and rock beats scissors! \n");
    }

    if (comp == 1 &&  person == 0){
        printf("You won, the robot chose rock and paper beats rock! \n");
    }

    if (comp == 1 &&  person == 2){
        printf("You lost, the robot chose scissors and scissors beats paper!  \n");
    }

    if (comp == 2 &&  person == 1){
        printf("You won, the robot chose paper and scissors beats paper! \n");
    }

    if (comp == 2 &&  person == 0){
        printf("You lost, the robot chose rock and rock beats scissors! \n");
    }


}