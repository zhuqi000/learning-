#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
#define MIN(x,y) (x<y?x:y)
int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	int min = 0;

	scanf("%d%d", &a, &b);
	min = MIN(a,b);
	printf("min=%d\n", min);
	max = Max(a, b);
	printf("max=%d\n", max);
	return 0;
}