#include <stdio.h>

int a2_8() {
	int n1, n2, n3, n4; /*整型*/
	double d1, d2, d3, d4;/*浮点型*/

	n1 = 5 / 2;
	n2 = 5.0 / 2.0; //赋值的时候就会舍弃小数点以后的部分
	n3 = 5.0 / 2;  //同上
	n4 = 5 / 2.0; //同上

	d1 = 5 / 2;
	d2 = 5.0 / 2.0;
	d3 = 5.0 / 2;
	d4 = 5 / 2.0;

	printf("n1 = %d \n", n1);
	printf("n2 = %d \n" , n2);
	printf("n3 = %d \n" , n3);
	printf("n4 = %d \n" ,n4);

	printf("d1 = %f  \n" ,d1);
	printf("d2 = %f  \n" , d2);
	printf("d3 = %f  \n" , d3);
	printf("d4 = %f  \n" , d4);


	return 0;
}