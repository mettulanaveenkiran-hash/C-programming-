#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	printf("enter row and column size");
	scanf("%d%d",&r,&c);
	printf("enter A matrix valyes");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	printf("\n");
	return 0;
}
	
	
