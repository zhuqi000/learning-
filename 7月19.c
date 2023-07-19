#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age=0;
	printf("你的年龄为：");
	scanf("%d", &age);
	if (age < 18)
		printf("你未成年\n");
	else
		printf("你成人了");
	return 0;
}