#include<stdio.h>
#include<conio.h>
#define fd(x,y) (y-x)/(y+x)
main()
{
	float x0,h,x,k1,k2,y0,x1,y1,k3,k4,k;
	printf("Enter the initial value of X[0] :");
	scanf("%f",&x0);
	printf("Enter the initial value of Y[0] :");
	scanf("%f",&y0);
	printf("Enter the Step size :");
	scanf("%f",&h);
	printf("Enter the required value of X :");
	scanf("%f",&x);
	printf("--------------------------------------\n");
	do{
		k1=h*fd(x0,y0);
		k2=h*fd(x0+h/2,y0+k1/2);
		k3=h*fd(x0+h/2,y0+k2/2);
		k4=h*fd(x0+h,y0+k3);
		k=(k1+2*k2+2*k3+k4)/6;
		y0=y0+k;
		x0=x0+h;
		printf("y=%f\tx=%f\n",y0,x0);
	}while(x0<x);
	printf("--------------------------------------\n");
	printf("The value of required y is : %f ",y0);
	getch();
	return 0;
}
