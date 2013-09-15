#include<stdio.h>

int main(void)
{
	int endState =0;

	printf("Put in the amount of players fool!\n");
	unsigned int playerCount;
	scanf("%d",&playerCount);

	printf("Enter maximum bet amount.\n");
	int maxBet;
	scanf("%d",&maxBet);

	//int temp =0;todo:Put back in once diagnostic on todo:1 is removed.
	float tempFloat =0;//todo1:Remove on release.
	int tempInt =0;
	int totalBet = 0;
	for(unsigned int i=0;i<playerCount;i++)
	{
		printf("Player %d, put in your bet!\n",i+1);
		scanf("%d",&tempInt);

		while(tempInt>maxBet)
		{
			printf("Bet too high, try again you drunk twat XD\n");
			scanf("%d",&tempInt);
		}
		printf("DIAGNOSTIC: totalBet is %d.\n",totalBet);//todo:Remove on release.
		totalBet += tempInt;
		printf("DIAGNOSTIC: totalBet is %d.\n",totalBet);//todo:Remove on release.
	}
	printf("DIAGNOSTIC: totalBet is %d.\n",totalBet);//todo:Remove on release.
	float averageBet = totalBet/playerCount;
	printf("DIAGNOSTIC: averageBet is %f.\n",averageBet);//todo:Remove on release.
	printf("DIAGNOSTIC: totalBet is %d.\n",totalBet);//todo:Remove on release.
	//rounds down to accomodate odd number for totalBet, 
	//need to pour one more shot if ((playerCount == EVEN) && averageBet/(totalBet == ODD))
	for(unsigned int i=0;i<playerCount;i++)
	{
		printf("DIAGNOSTIC: Current Average Bet is %4.2f\n",averageBet);//todo:Remove on release.
		tempFloat = averageBet*i;
		tempInt = i+1;
		printf("Rank %d drinks %f shots.\n",tempInt,tempFloat);
	}
	scanf("%d");
	return endState;
}