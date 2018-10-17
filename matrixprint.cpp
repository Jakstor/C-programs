#include<stdio.h>
int main()
{
	int mat[100][100],i,j,row,col;
	printf("Enter the size of the matrix: \n");
	scanf("%d %d",&row ,&col);
	printf("Enter the elements: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("The elements are \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	return(0);

}
