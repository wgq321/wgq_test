#if 1
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<limits.h>
#define MAX 1000
void test01() {

	unsigned short us;
	printf("������һ���޷��Ŷ�������ֵ");
	scanf("%hd",&us);
	printf("%hd",us);

}
void test02() {
	unsigned int ui;
	printf("������һ���޷�������");
	scanf("%u",&ui);
	printf("%u\n",ui);
	printf("unsigned�������ֵ :%u",UINT_MAX);
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