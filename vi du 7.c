#include<stdio.h>
main()
{
	int yearWithUs;
	float bizDone;
	printf("yearWithUs: ");
	scanf("%d", &yearWithUs);
	printf("bizDone* ");
	scanf("%f", &bizDone);
	if((yearWithUs>=10) and (bizDone>=5000000))
	{
		printf("Classified as an MVS");
	}
	else
	{
		printf("A little more effort required!");
	}
	return 0;
}
