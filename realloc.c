#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int *ptr = (int*)malloc(n*sizeof(int));
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("The elements of the array are \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",ptr[i]);
	}
	printf("Now changing the size of the array\nEnter the size\n");
	int n2;
	scanf("%d",&n2);
	*ptr = (int*)realloc(ptr,n2*sizeof(int));
	printf("Enter the elements of the array after reallocation\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("The elements of the array after reallocation are \n");
	for(i=0;i<n2;i++)
	{
		printf("%d\n",ptr[i]);
	}
}
