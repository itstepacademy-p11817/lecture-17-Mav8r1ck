#include <stdio.h>
#include <stdlib.h>

int function (int array[])
{

	for (int i = 0; i < 4; i++)
	{
		int b = 0;
		if (array[i] >array[i+1])
		{
			int b = array[i];
			array[i] = array[i + 1];
			array[i + 1] = b;
		}
	}
}

int main()

{
	int array[5] = { 5, 4, 3, 2, 1 };
	function(array);
	for (int i = 0; i < 5; i++)
	{
		printf("%d", array[i]);
	}
	system("pause");
	return 0;
}