#include<stdio.h>
void function(int n)
{
	int i = 1, s =1;
	while (s <= n)
	{
		i++;
		s += i;
		printf("*");
	}
}
