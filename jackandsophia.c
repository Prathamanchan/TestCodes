#include<stdio.h>

int main()
{
	int T,loop;
	int N,star,hash;
	star=1;
	
//	printf("Enter the number of Test Cases:\n");
	scanf("%d",&T);
	
	
	
	printf("Enter the Inputs:\n");
	for(int i=0;i<T;i++)
	{
		scanf("%d",&N);
		loop=N*2;
		hash=1;
		star=1;
		while(hash>0)
		{
		hash=N*2-star*2;
		    printf("\n");
			for(int j=1;j<=star;j++)
			printf("*");
			for(int j=1;j<=hash;j++)
			printf("#");
			for(int j=1;j<=star;j++)
			printf("*");
			star++;
		}	
		printf("\n");
	}


}
