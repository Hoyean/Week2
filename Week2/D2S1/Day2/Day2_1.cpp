#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	char c1;

	printf("\n2���� �ູ�� VC++\n");

	while (c1 /= 27)
	{
		printf("\ncommand>");
		scanf_s(" %c", &c1);

		if (c1 == 'q')
		{
			printf("\nqwer ȭ����\n");
		}
		else if (c1 == 'w')
		{
			printf("\n���� �ʹ� ����\n");
		}
		else if (c1 == 'e')
		{
			printf("\n���ֺ��� ������ 3���\n");
		}
		else if (c1 == 'r')
		{
			printf("\n�ູ�մϴ�.\n");
		}
		else
		{
			printf("\n�ٽ� �Է��ϼ���\n");
		}
	}
}