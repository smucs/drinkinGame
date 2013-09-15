#include<stdio.h>

//define TRUE & FALSE
#define TRUE 1
#define FALSE 0

//change to 1 to remove debug code 
#define DEBUG TRUE

// *** END STATES ***
#define OK 0
#define ERROR 1


int main(int argc, char* argv[])
{
	int endState = OK;

	printf("Put in the amount of players fool!\n");
	unsigned int playerCount;
	scanf("%d",&playerCount);

	printf("Enter maximum bet amount.\n");
	float maxBet;
	scanf("%f",&maxBet);

	//int temp =0; todo:Put back in once diagnostic on todo:1 is removed.
	//WTF?
        float tempFloat = 0.0f; //todo1:Remove on release.
	float bet;
	float totalBet = 0.0f;
        float averageBet; 
	for(unsigned int i=0;i<playerCount;i++)
	{
		printf("Player %d, put in your bet!\n",i+1);
		scanf("%f",&bet);

		while(bet>maxBet)
		{
			printf("Bet too high, try again you drunk twat XD\n");
			scanf("%d",&bet);
		}
		if(DEBUG) printf("DIAGNOSTIC: totalBet is %.2f.\n",totalBet);//will compile out
		totalBet += bet;
		if(DEBUG) printf("DIAGNOSTIC: totalBet is %.2f.\n",totalBet);//will compile out
	}

        averageBet = totalBet / playerCount;

	if(DEBUG) printf("DIAGNOSTIC: totalBet is %.2f.\n",totalBet);//will compile out
	if(DEBUG) printf("DIAGNOSTIC: averageBet is %.2f.\n",averageBet);//will compile out
	if(DEBUG) printf("DIAGNOSTIC: totalBet is %.2f.\n",totalBet);//will compile out
	
        //rounds down to accomodate odd number for totalBet, 
	//need to pour one more shot if ((playerCount == EVEN) && averageBet/(totalBet == ODD))
	
	int tempInt;

        for(unsigned int i=0;i<playerCount;i++)
	{
		if(DEBUG) printf("DIAGNOSTIC: Current Average Bet is %4.2f\n",averageBet);//will compile out
		tempFloat = averageBet*i;
		tempInt = i+1;
		printf("Rank %d drinks %.1f shots.\n",tempInt,tempFloat);
	}

	scanf("%c");
	return endState;
}
