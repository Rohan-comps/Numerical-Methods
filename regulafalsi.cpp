#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x*x-2*x-2)
int main()
{
	float a,b,c,e;
	printf("Enter the desire accuracy...\n");
	scanf("%f",&e);
	do{
		printf("Enter the valid interval...\n");
		scanf("%f",&a);
		scanf("%f",&b);	
	}
	while(f(a)*f(b)>0);
	printf("\nThe value of C are\n");
	printf("\n=====================");
	do
	{
		c=b-((b-a)/(f(b)-f(a)))*f(b);
		printf("\n%f\t%f",c,f(c));
		if(f(c)<0)
			a=c;
		else
			b=c;	
	}
	while(fabs(a-b)>=e);
	printf("\n=====================\n");
	printf("the root of the equation is...   %f",c);
	getch();
	return 0;
}
