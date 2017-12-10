#include <stdio.h>
#include<math.h>

void sieveOfEra()
{
	int sieveArray[149] = { 0 };
	int checkArray[4] = { 2,3,5,7 };
	int pI = 2, memAdd = 0, toFalse = 0, j = 0;

	for ( ; pI < 151; pI++)
	{
		sieveArray[memAdd] = pI;
		memAdd++;
	}
	for (; j < 5 ; j++)
	{
		for (; toFalse < 149; toFalse++)
		{
			if (sieveArray[toFalse] % checkArray[j] == 0)
			{
				sieveArray[toFalse] = 0;
			}
		}
	}
	


	for (int j = 0; j < 149; j++)
	{
		printf("%d\n", sieveArray[j]);
	}
	
}

int main()
{
	sieveOfEra();

	system("PAUSE");
	return 0;
}