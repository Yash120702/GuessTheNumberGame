#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int number, guess, nguesses=1;
    srand(time(0));
    number=rand()%100 +1 ; // generates a random no. from 1 to 100
// printf("The no. is %d\n", number);
do{
    printf("Guess the no. between 1 to 100\n");
    scanf("%d",&guess);
if(guess>number){
printf("Lower no. please\n");

}
else if(guess<number){
printf("Higher no. please!\n");    
}
else{
    printf("You guessed the no. in %d attempts\n", nguesses);
}
nguesses++;
}while(guess!=number);
    return 0;
}
