#include <stdio.h>
#include <stdlib.h>

int i = 0;
int l = 0;
int array[5] = { 1, 11, 111, 1111, 11111 };

int sum_of_numbers(l)
{
	int sum = 0;
	while (l != 0)
	{
		sum += l % 10;
		l /= 10;
	}
	return sum;
}

int main()
	
{
	int b = 0;
	for (i; i < 5; i++)
	{
		int l = array[i];
		if (sum_of_numbers() % 3 != 0)
		{
			b++;
		}
	}
	
	printf("%d", b);
	system("pause");
	return 0;
}