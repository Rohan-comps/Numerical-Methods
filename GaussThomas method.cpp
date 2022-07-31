#include<stdio.h>
#include<conio.h>
main()
{
	float a[10][10],b[10],x[10],sum,z;
	int n,i,j,k;
	printf("Enter the order of the matrix: ");
	scanf("%d",&n);
	printf("Enter %d*%d elements of co-efficient matrix: \n",n,n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%f",&a[i][j]);
	}
	printf("\nEnter 3 elements of right hand side vector: \n");
	for(i=1;i<=n;i++)
		scanf("%f",&b[i]);
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			if(i!=k)
				z=a[i][k]/a[k][k];
			for(j=1;j<=n;j++)
			{
				a[i][j]=a[i][j]-z*a[k][j];
			}
				b[i]=b[i]-z*b[k];
		}
	}
	x[n]=b[n]/a[n][n];
	for(k=n-1;k>=1;k--)
	{
		sum=b[k];
		for(j=n;j>=k+1;j--)
		{
			sum=sum-a[k][j]*x[j];
			x[k]=sum/a[k][k];
		}
	}	
	printf("\nThe Solution of the System of linear equations is:\n");
	printf("--------------------------------------------------\n");
	for(i=1;i<=n;i++)
		printf("X[%d]=%f\t\t",i,x[i]);
	getch();
	return 0;
}
