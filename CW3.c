#include <stdio.h>
#include <stdlib.h>

int function (int array[], int array2[], int M)
{
	int b = 0;
	for (int i = 0; i < 5; i++)
	{
		if (array[i] % M == 0)
		{
			array2[b] = array[i];
			b++;
		}
	}
}

int main()

{
	int array[5] = { 1, 2, 3, 4, 5 };
	int array2[5] = { 0 };
	int M = 2;
	function(array, array2, M);
	for (int i = 0; i < 5; i++)
	{
		printf("%d", array2[i]);
	}
	system("pause");
	return 0;
}