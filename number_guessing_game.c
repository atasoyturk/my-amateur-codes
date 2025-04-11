#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int randomNum, guessNum, guessCoun, grade=100;
	
	srand (time(NULL));
	randomNum = (rand()%100) + 1;
	printf("I kept a random number between 1-100.\n");
	printf ("            GUESS!!!            ");
	printf("\n----------------------------------------");
	
	while (guessNum != -1){
		
		printf("\n\nEnter your prediction: ");
		scanf("%d", &guessNum);
		if (guessNum == -1) break;
		
		if(guessNum<1 || guessNum>100){
			printf("I said 1-100!\n");
			continue;
			}
			
			guessCoun ++;
		
		if(guessNum == randomNum){
				printf("\nBravo, On your %dth try, you got it right", guessCoun);
				break;
		}else{
			if(guessNum<randomNum){
				printf("You should enter a bigger number.");
				grade -=5;
			}else{
				printf("You should enter a smaller number.");
				grade -=5;
			}
		}
		
		}	
			
		if(grade<0){
			printf("\nThe score you got:0. \nHow about playing again!");
			
		}else{
			printf("\nThe score you got:%d \nHow about playing again!", grade);
		}
			
			return 0;
		
}
