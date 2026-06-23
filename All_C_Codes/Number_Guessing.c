#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	//Human Guesser
	
	/*srand(time(0));
	const int MIN = 1;
	const int MAX = 100;
	int answer,guesses,guess;
	
	answer = (rand() % MAX) + MIN;
	
	do{
		printf("Enter your guess : ");
		scanf("%d", &guess);
		if (guess < answer){
			printf("Too Low!\n");
		}
		else if (guess > answer){
			printf("Too High\n!");
		}
		else {
			printf("Correct\n!");
		}
		guesses++;
	}while(guess!=answer);
	printf("Answer = %d\nNumber of Guesses = %d",answer,guesses);
	*/
	
	//Machine Guesser
	/*const int MIN = 1;
	const int MAX = 100;
	int answer,guesses;
	int mg;
	
	srand(time(0));
	answer = (rand() % MAX) + MIN;
	
	
	do{
		
		//machine guess
		mg = (rand() % MAX) + MIN;
		
		guesses++;
	}while(mg!=answer);
	printf("Answer = %d\nNumber of Guesses = %d",answer,guesses);*/
		
}