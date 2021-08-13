#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	printf("加入比特\n");
	int line = 0;
	while(line <= 20000)
	{
		line++;
		printf("我要敲代码;%d\n",line);
	}
	if (line > 20000)
		printf("好offer\n");
	return 0;
}
//int Add(int x, int y)
//{
//	
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}