#include<stdio.h>
main()
{
	int exp, salary;
 	char grade ;
 	printf("Xep loai: "); scanf("%c", &grade);
 	printf("Kinh nghiem: "); scanf("%d", &exp);
 	if(grade=='E')
 	{
 		if(exp==2)
 		  {printf("salary: 2000");
		                         }
	else
		if(exp==3)
		  {printf("salary: 3000");
		                         }	   	      
	                              }
	if(grade=='M') 
	{
		if(exp==2)
		 {printf("salary: 3000");
		                        }
	else
	    if(exp==3)	 
		 {printf("salary: 4000");
								}                       
								 }                             
	return 0;
}
