#if 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#define MAX 1000
void test01() {

	unsigned short us;
	printf("请输入一个无符号短整型数值");
	scanf("%hd",&us);
	printf("%hd",us);

}
void test02() {
	unsigned int ui;
	printf("请输入一个无符号整型");
	scanf("%u",&ui);
	printf("%u\n",ui);
	printf("unsigned类型最大值 :%u",UINT_MAX);
}

int main() {


	int a = 10;
	int* p = &a;
	printf("%d\n",*p);
	printf("%p",&a);
	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}
#endif // 0