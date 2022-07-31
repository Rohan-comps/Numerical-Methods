#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x*x+x-1)
int main()
{
	float a,b,c,e;
	printf("Enter the desire accuracy...\n");
	scanf("%f",&e);
	printf("Enter the valid interval...\n");
	scanf("%f",&a);
	scanf("%f",&b);	
	printf("\nThe value of C are\n");
	printf("\n=====================");
	while(fabs(a-b)>e)
	{
		c=b-((b-a)/(f(b)-f(a)))*f(b);
		printf("\n%f\t%f",c,f(c));
		if(f(a)-f(c)<0)
			b=c;
		else
			a=c;	
	}
	
	printf("\n=====================\n");
	printf("the root of the equation is...   %f",c);
	getch();
	return 0;
}
