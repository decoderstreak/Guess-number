//Number guessing game in c
//Step 1 : Let me generate a random number ok
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int no,guess,attempt=1;
	srand(time(0));
	no=rand()%100 + 1;//generates random number between 1 to 100
	printf("The random no is %d\n",no);
	//DO-WHILE LOOP
	do{
		printf("Guess the no btw 1 to 100\n");
		scanf("%d",&guess);
		if(guess>no)
		{
			printf("Uh it is higher!!!!!\n");
		}
		else if(guess<no)
		{
			printf("uhhh it is lower\n");
		}
		else
		{
			printf("U have guessed the right one i.e %d\n",no);
			printf("U have guessed the number in %d attempts\n",attempt);
		}
		attempt++;
	}
	while(no!=guess);
}
