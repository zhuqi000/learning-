#define _CRT_SECURE_NO_WARNINGS 1
//È¡ÆæÊý
#include<stdio.h>
int main()
{
	int a = 0;
	int b;
	while (a <= 100)
	{
		b = a % 2;
		if (1==b)
			printf("%d  ", a);

		a++;
	}
	return 0;
}