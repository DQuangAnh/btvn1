#include<stdio.h>
main()
{
	int r, num;
	printf("Nhap vao mot so: ");
	scanf("%d", &num);
	r = num % 2;
	if(r == 0)
	{
	printf("so vua nhap vao la so chan. ");
	}
	return 0;
}
