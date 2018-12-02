# include <stdio.h>;

int a2_7() {
	double a, b;
	printf("请输入两个浮点数! \n");

	printf("请输入浮点数a! \n");
	scanf("%lf", &a);

	printf("请输入浮点数b! \n");
	scanf("%lf", &b);

	printf("a+b = %f \n", a + b);
	printf("a-b = %f \n", a - b);
	printf("a*b = %f \n", a * b);
	printf("a/b = %f \n", a /b);

	/*注意:%运算只能用于整型计算*/
	return 0;
}