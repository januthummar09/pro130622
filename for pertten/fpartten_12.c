#include<stdio.h>
int main()
{
	int i,j,k=2;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("\t%d",k);
			
		}
	k+=2;
	printf("\n");
	}
	return 0;
}
