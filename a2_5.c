#include <stdio.h>

int a2_5() {
	int a, b;
	puts("清输入两个整数!");
	printf("整数a:");
	scanf("%d", &a);
	printf("整数b:");
	scanf("%d", &b);
	printf("他们的平均值是 %d 。 \n", (a + b) / 2);
	return 0;
}