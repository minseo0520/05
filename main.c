#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
	int answer = 59;
	int i;
	int trial=0;
	
	do
	{
		printf("Guess a number:");
	    scanf("%d", &i);
	    
	    if(i>59)
	    printf("high!\n");
	    
	    else if(i<59)
	    printf("low!\n");
	    
	    trial = trial + 1;
	}
	while(i!=59);
	printf("Congratulation! trials:%d", trial);
	
	return 0;
}
