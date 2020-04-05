#include<stdio.h>
void main()
{
	int r1,c1,r2,c2,i,j,k,sum=0;
	printf("\nEnter the number of row's and colunm's of first matrix:");
	scanf("%d %d",&r1,&c1);
	printf("\nEnter the number of colunm's in second matrix:");
	scanf("%d",&c2);
	r2=c1;
	int *matrix1 =(int*)calloc(r1*c1,sizeof(int)),*matrix2 =(int*)calloc(r2*c2,sizeof(int)),*matrix3 =(int*)calloc(r1*c2,sizeof(int));
	for(i=0;i<r1;i++)
	{	
		for(j=0;j<c1;j++)
		{
			printf("\nmatrix1[%d][%d]: ",i,j);
			scanf("%d",(matrix1 + j + i*c1));
		}
	}
	for(i=0;i<r2;i++)
	{	
		for(j=0;j<c2;j++)
		{
			printf("\nmatrix2[%d][%d]: ",i,j);
			scanf("%d",(matrix2 + j + i*c2));
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{	sum =0;
			for(k=0;k<c1;k++)
			{
				sum += (*(matrix1 + k + c1*i) * *(matrix2 + k*c2 +j)); 
			}
			*(matrix3+j+c2*i) = sum;
		}
	}
	printf("\n Matrix1: \n");
	for(i=0;i<r1;i++)
	{	
		for(j=0;j<c1;j++)
		{
			printf("%d ",*(matrix1 + j + i*c1));
		}
		printf("\n");
	}
	printf("\n Matrix2: \n");
	for(i=0;i<r2;i++)
	{	
		for(j=0;j<c2;j++)
		{
			printf("%d ",*(matrix2 + j + i*c2));
		}
		printf("\n");
	}
	printf("\n Matrix3(Multiplication of Matrix1 and Matrxi2): \n");
	for(i=0;i<r1;i++)
	{	
		for(j=0;j<c2;j++)
		{
			printf("%d ",*(matrix3 + j + i*c2));
		}
		printf("\n");
	}
	free(matrix1);
	free(matrix2);
	free(matrix3);
}
