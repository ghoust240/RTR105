#include<stdio.h>
int fun()
{
	char x = 32+15;
	char delta = 7;
	x = x + delta;
	return x;
}

	int main()
{
	char x = 32+15;
	printf("Pirms,%c\n", x);
	//Sheit paraadaas burts ... jo ...

	fun();
	printf("Peec 1 reizes,%c\n", x);
	//Peec 1. reizes paraadaas burts ... jo ...

	fun();
	printf("Peec 2 reizeem,%c\n", x);
	//Peec 2. reizes paraadaas burts ... jo ...
}
