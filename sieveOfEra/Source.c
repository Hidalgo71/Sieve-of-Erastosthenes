#include <stdio.h>
#include<math.h>

void sieveOfEra()
{
	int sieveArray[149] = { 0 };
	int checkArray[4] = { 2,3,5,7 };
	int pI = 2, memAdd = 0, toFalse = 0, j = 0;

	for (; pI < 151; pI++)
	{
		sieveArray[memAdd] = pI;
		memAdd++;
	}
	for (; toFalse < 149; toFalse++)
	{
		if (sieveArray[toFalse] % checkArray[0] == 0)
		{
			if (sieveArray[toFalse] == 2)
			{
				continue;
			}
			sieveArray[toFalse] = 0;
		}
	}

	for (toFalse = 0; toFalse < 149; toFalse++)
	{
		if (sieveArray[toFalse] % checkArray[1] == 0)
		{
			if (sieveArray[toFalse] == 3)
			{
				continue;
			}
			sieveArray[toFalse] = 0;
		}
	}

	for (toFalse = 0; toFalse < 149; toFalse++)
	{
		if (sieveArray[toFalse] % checkArray[2] == 0)
		{
			if (sieveArray[toFalse] == 5)
			{
				continue;
			}
			sieveArray[toFalse] = 0;
		}
	}

	for (toFalse = 0; toFalse < 149; toFalse++)
	{
		if (sieveArray[toFalse] % checkArray[3] == 0)
		{
			if (sieveArray[toFalse] == 7)
			{
				continue;
			}
			sieveArray[toFalse] = 0;
		}
	}


	//for (j = 0; j < SIZE; j++)
	//{
	//	for (i = 0; i < SIZE; i++)
	//	{
	//		scanf_s("%d", &A[i][j]);
	//	}
	//}

	for (int j = 0; j < 149; j++)
	{
		if (sieveArray[j] != 0)
		{
			printf("%d\n", sieveArray[j]);
		}
	}

}

int main()
{
	sieveOfEra();

	system("PAUSE");
	return 0;
}