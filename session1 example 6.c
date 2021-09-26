#include<stdio.h>
main()
{
	int r, num;
	printf("nhap vao mot so: ");
	scanf("%d", &num);
	r = num % 2 ;
	if(r==0)
	{
		printf("So vua nhap la so chan.");
	}
	else
	{
	printf("So vua nhap la so le.");
	}
	return 0;
}
