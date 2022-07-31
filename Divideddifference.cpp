#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,k;
	float x[10],y[10][10],z,sum,product;
	printf("Enter Number of elements : ");
	scanf("%d",&n);
	printf("Enter values of x \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("Enter values of Y \n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&y[i][0]);
	}
	for(j=1;j<n;j++)
	{
		k=j;
		for(i=0;i<n-j;i++)
		{
			y[i][j]=((y[i+1][j-1]-y[i][j-1])/(x[k]-x[i]));
			k++;
		}
	}
	printf("Enter the interpolation point : ");
	scanf("%f",&z);
	printf("Divided difference Table is :\n");
	printf("===============================\n");
	for(i=0;i<n;i++)
	{
		printf("%.2f\t",x[i]);
		for(j=0;j<n-i;j++)
		{
			printf("%.2f\t",y[i][j]);
		}
		printf("\n");
	}
	sum=y[0][0];
	for(i=1;i<n;i++)
	{
		product=y[0][i];
		for(j=0;j<i;j++)
		{              
			product=product*(z-x[j]);
			
		}
		sum=sum+product;
	}
	printf("The resultant value is :%.2f",sum);
	getch();		
	return 0;						
}
