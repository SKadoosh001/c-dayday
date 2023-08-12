#include <stdio.h>

int main() {
	for (int i = 0; i < 10; i++)
	{
		int num1 = 1;
		for (int j = i; j > 1; j--)
		{
			num1 = num1 * j;
		}
		printf("%d\n", num1);
	}
	return 0;
}