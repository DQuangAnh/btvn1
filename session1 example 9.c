#include<stdio.h>
 main()
 {
 	int exp, salary;
 	char grade ;
 	printf("Xep loai: "); scanf("%c", &grade);
 	printf("Kinh nghiem: "); scanf("%d", &exp);
 	if((grade=='E') and(exp==2))
 	 {printf("salary: 2000");
	                         };
	if((grade=='E') and(exp==3))
	 {printf("salary: 3000");
	                         };
    if((grade=='M') and(exp==2))
      {printf("salary: 3000");
		  } 
	if((grade=='M') and(exp==3))
	  {printf("salary: 4000");
			   }	     
 return 0;
 }
