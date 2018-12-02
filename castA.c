#include <stdio.h>

int castA() {
	printf("类型强制转换 \n");

	double d = 5 / 2;
	printf("d= %f \n", d);

	printf("(2.1+2.6)/2 = %f \n", (double)(2.1 + 2.6) / 2);
	return  0;
}