#include<stdio.h>

int main(){
int score;
score=15;   //setting score value to 15;

/* Incorrect Approach */
score=(score/20)*100;
printf("Score value for first attempt is %d \n",score);

/*Incorrect Approach 2 */
score=15;  //resetting the score value to 15
score=(int)(score/20)*100;
printf("Score value for first attempt is %d \n",score);

/*Correct Approach */
score=15; //resetting score value to 15
score=((double)score/20)*100;
printf("Score value for first attempt is %d \n",score);


/*Correct Approach */
score=15;
score=(score/20.0)*100;
printf("Score value for first attempt is %d \n",score);


return 0;

}
