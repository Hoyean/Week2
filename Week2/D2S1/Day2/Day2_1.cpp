#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char c1;

	printf("\n2일차 행복한 VC++\n");

	while (c1 /= 27)
	{
		printf("\ncommand>");
		scanf_s(" %c", &c1);

		if (c1 == 'q')
		{
			printf("\nqwer 화이팅\n");
		}
		else if (c1 == 'w')
		{
			printf("\n과제 너무 좋다\n");
		}
		else if (c1 == 'e')
		{
			printf("\n담주부턴 과제량 3배다\n");
		}
		else if (c1 == 'r')
		{
			printf("\n행복합니다.\n");
		}
		else
		{
			printf("\n다시 입력하세요\n");
		}
	}
}