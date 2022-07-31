#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,h,p=1;
	float z,u,sum,q,x[10],y[10][10];
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
	printf("\n");
	printf("\nEnter Interpolation point :");
	scanf("%f",&z);
	printf("\n");
	for(j=1;j<n;j++)
	{
		for(i=n-1;i>(j-1);i--)
            y[i][j] = y[i][j-1] - y[i-1][j-1];
	}
	printf("Backword Difference Table is \n");
	printf("======================================\n");
	for(i=0;i<n;i++)
    {
        printf("%.2f",x[i]);
        for(j=0;j<=i;j++)
            printf("\t%.2f",y[i][j]);
        printf("\n");
    }
	h=x[1]-x[0];
	u=(z-x[n-1])/h;
	sum=y[n-1][0];
	q=1.0;
	for(j=1;j<n;j++)
	{
		p=p*j;
		q=q*(u+j-1);
		sum=sum+((q*y[n-1][j])/p);
	}
	printf("\n");
	printf("The interpolation point value is : %0.2f",sum);
	getch();		
	return 0;						
 }
