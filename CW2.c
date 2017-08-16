#include <stdio.h>
#include <stdlib.h>



int main()
	
{
	int l = 0;
	int array[5] = { -1, 11, -111, 1111, -11111 };
	int array2[5] = { 0, 23, -488, 2, 33 };
	int array3[10] = { 0 };
	int b = 0;
	for (int i = 0; i < 5; i++)
	{
		if (array[i] > 0)
		{
			array3[b] = array[i];
			printf("%d\n", array3[b]);
			b++;
		}

	}
	for (int i = 0; i < 5; i++)
	{
		if (array2[i] > 0)
		{
			array3[b] = array2[i];
			printf("%d\n", array3[b]);
			b++;
		}

	}
	for (int i = 0; i < 5; i++)
	{
		if (array[i] == 0)
		{
			array3[b] = array[i];
			printf("%d\n", array3[b]);
			b++;
		}

	}
	for (int i = 0; i < 5; i++)
	{
		if (array2[i] == 0)
		{
			array3[b] = array2[i];
			printf("%d\n", array3[b]);
			b++;
		}

	}
	for (int i = 0; i < 5; i++)
	{
		if (array[i] < 0)
		{
			array3[b] = array[i];
			printf("%d\n", array3[b]);
			b++;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		if (array2[i] < 0)
		{
			array3[b] = array2[i];
			printf("%d\n", array3[b]);
			b++;
		}
	}
	system("pause");
	return 0;
}