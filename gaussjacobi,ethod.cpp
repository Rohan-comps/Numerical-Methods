#include<stdio.h>
#include<conio.h>
#include<math.h>
#define fx(x,y,z) ((4+2*y-z)/5)
#define fy(x,y,z) ((-1+x+2*z)/6)
#define fz(x,y,z) ((13-3*x-y)/5)
main()
{
	float e=0.001,e1,e2,e3,x0=2.0,y0=2.0,z0=2.0,x1,y1,z1;
	int i=0;
	printf("Iteration\tx\t\ty\t\tz\n");
	printf("\n=======================================================\n");
	do{
		x1=fx(x0,y0,z0);
		y1=fy(x0,y0,z0);
		z1=fz(x0,y0,z0);
		i++;
		printf("%d\t%f\t\t%f\t%f\t%f\n",i,x1,y1,z1);
		e1=fabs(x1-x0);
		e2=fabs(y1-y0);
		e3=fabs(z1-z0);
		x0=x1;
		y0=y1;
		z0=z1;
	}while(e1>e && e2>e && e3>e);
	printf("The Solution is x=%.2f\ny=%.2f\nz=%.2f\n",x0,y0,z0);
	getch();
	return 0;
}
