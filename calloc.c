//DMA:dynamic memory allocation
//malloc(),calloc()
//memory allocation
// contiguos memory allocation

#include<stdio.h>
#include<stdlib.h>
main()
{
	
	int n,i;
	int *ptr,*temp;
	printf("Enter the Number of elements u want to store:");
	scanf("%d",&n);//5*4=20
	ptr=(int*)calloc(n,sizeof(int));
	temp=ptr;//101 pointer assignment
	printf("Enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}	
	
	printf("ur elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d ",*temp);
		temp++;
	}
	
	
}
//5
//20 bytes block
//20 bytes block allocate  address
//101 105  109 113 117
//5   3    2    67 21

//contiguos

//5
//47 4 4 4 4

//117
//(casttype*)malloc(numberofelements*sizeof(datatype));
