#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	float z,sum=0.0,product;
	float x[20],y[20];
	printf("Enter the number of Input :");
	scanf("%d",&n);
	printf("Enter the values of X : ");
	for(i=0;i<n;i++)
		scanf("%f",&x[i]);
	printf("Enter the values of Y : ");
	for(i=0;i<n;i++)
		scanf("%f",&y[i]);
	printf("Enter the interpolation point :");
	scanf("%f",&z);
	for(i=0;i<n;i++)
	{
		product=y[i];
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
				product=product*((z-x[j])/(x[i]-x[j]));
			}
		}
		sum=sum+product;
	}
	printf("The resultant value is : %f",sum);
	getch();
	return 0;	
}
