#include <stdlib.h>
#include <stdio.h>

int function(int x)
{
	x = x - 8;
	return x;
}

int main()
{
	int a = 30, i = 0;

	while (a > 0)
	{
		a = function(a);
		i++;kkk
	}
	printf("%d", i);
	return 0;
}
