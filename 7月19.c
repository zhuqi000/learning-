#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age=0;
	printf("�������Ϊ��");
	scanf("%d", &age);
	if (age < 18)
		printf("��δ����\n");
	else
		printf("�������");
	return 0;
}