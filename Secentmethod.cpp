#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) (x*x*x-2*x-2)
main()
{
    float a,b,c,d,e;
    int count=1,n;
    printf("Enter the desire accuracy...\n");
	scanf("%f",&e);
	printf("Enter the valid interval...\n");
	scanf("%f",&a);
	scanf("%f",&b);
    printf("Enter the maximun number of iterations:\n");
    scanf("%d",&n);
    printf("\nThe value of C are\n");
	printf("\n=====================\n");
    do
    {
        c=b-((b-a)/(f(b)-f(a)))*f(b);
        printf("Iteration No-%d    x=%f\t%f\n",count,c,f(c));
       	a=b;
       	b=c;
        count++;
        if(count==n)
        {
        	break;
        }
    } while(fabs(f(c))>e);
    printf("\n The required solution is %f\n",c);
 
}
