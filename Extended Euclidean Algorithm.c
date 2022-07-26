#include <stdio.h>

main()
{
	int a,b,r,k,i=1;
	printf("This program is using extended Euclidean algorithm to find greates common divisor of two given integers.\n");
	printf("Enter two integers a and b:");
	scanf("%d %d", &a, &b);
	printf("\n");
	printf("You entered %d and %d\n", a,b);
	printf("PROCCESSING...\n\n");
	if(b>a)
	{
		r=a;
		a=b;
		b=r;
	}
	do{
		printf("STEP %d:(%d -(%d/%d)*%d)\n",i,a,a,b,b);
		k = (a - (a/b)*b);
		a=b;		
		b=k;
		i++;
	}while (b != 0);
	
	printf("\nGreatest common divisor = %d",a);
	
}
