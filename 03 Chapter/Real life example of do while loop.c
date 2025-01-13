#include <stdio.h>
int main(){
	

int guess;
int target = 7; // Example target number
do {
    printf("Guess the number: ");
    scanf("%d", &guess);
} while (guess != target);
printf("Congratulations! You guessed the right number.\n");
}

