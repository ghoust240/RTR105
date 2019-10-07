#include<stdio.h>
#include<math.h>
void main()
{
	int a=127;
	printf("operacija << : %d <<1  rezultats %d\n",a,a<<5);

	int b;
	printf("b mainiga \"sakuma\" stavokli : %d\n",b);

	b=a<<2;
	printf("operacija <<: %d<<%d rezultats %d\n",a,2,b);

	int c;
	printf("Papetisim << operaciju\n-----------------\n");
	printf("User, ievadi operaciju 1. operandu: ");
	scanf("%d",&a);
	printf("User, ievadi operaciju 2. operandu: ");
	scanf("%d",&c);
	b=a>>c;
	printf("------------------\n Skaties, kas ir sanacis: %d\n",b);
}
