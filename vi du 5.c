#include<stdio.h>
main()
{
int r, num;
printf("Nhap vao mot so: ");
scanf("%d", &num);
r = num % 2;
if(r==0)
{printf("So vua nhap vao la so chan.");
};
if(r!=0)
{
	printf("So vua nhap la so le.");
};
return 0;
}
