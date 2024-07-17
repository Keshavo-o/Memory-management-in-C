#include<stdio.h>
main()
{
	static int x =5;//This will remain constant throughout the code
	int y=3;
	int i;
	for(i=0;i<5;i++)
	{
		x=x+1;
		y=y+1;
	}
	x=x*5;
	y=y*5;
	printf("x is %d\ny is %d",x,y);
}
