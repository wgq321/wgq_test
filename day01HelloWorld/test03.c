#if 0

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() {


	while (1)
	{
		char q = 0;
		printf("init£º%d\n", q);
		(void)scanf("%c", &q);
		char buf[256] = { 0 };
		fgets(buf, 256, stdin);
		printf("%d\n", buf[0]);
		int ret = isalpha(q);
		if (ret)
		{
			if (q >= 65 && q <= 90)
			{
				printf("%c\n", q + 32);
			}
			else
			{
				printf("%c\n", q - 32);
			}
		}
		else
		{
			printf("end:%d\n", q);
			printf("000000\n");
		}
	}

	printf("\n");
	system("pause");
	return EXIT_SUCCESS;
}

#endif // 0
