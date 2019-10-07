#include<stdio.h>
#include<math.h>
int a=127;
int b=254;
void main()
{
	printf("operacija >> : %d >>1  rezultats %d\n",a,a>>1);
	printf("operacija << : %d <<1 rezultats %d\n",a,a<<1);
	printf("operacija & : %d & %d rezultats %d\n",a,b,a&b);
	printf("operacija && : %d && %d rezultats %d\n",a,b,a&&b);
	printf("operacija | : %d | %d rezultats %d\n",a,b,a|b);
	printf("operacija || : %d || %d rezultats %d\n",a,b,a||b);
	printf("operacija ^ : %d ^ %d rezultats %d\n",a,b,a^b);
	printf("operacija + : %d + %d rezultats %d\n",a,b,a+b);
}
