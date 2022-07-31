#include<stdio.h>
#include<conio.h>
#define fd(x,y) (x+y*y)
main()
{
	float x0,h,x,k1,k2,y0,x1,y1;
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
        y1=y0+k1;
        x1=x0+h;
        k2=h*fd(x1,y1);
        y1=y0+(k1+k2)/2;
        y0=y1;
        x0=x1;
		printf("y=%f\tx=%f\n",y1,x1);
	}while(x1<x);
	printf("--------------------------------------\n");
	printf("The value of required y is : %f ",y1);
	getch();
	return 0;
}
