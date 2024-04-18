#include "Functii.h"

int main()
{
	int secunde = 10;
	//LaunchCountdown(secunde);
	int index = -1;
	//std::cout << SumaNumerelorNaturaleUntilIndex(index);
	//std::cout << 5 % 3;
	int isPrime = 777;
	//CheckIfNumberISPrime(isPrime);
	//PyramidPattern(secunde);
	//std::cout << returnGCD(10, 45);
	//decimalToBinary(1);
	//untilMagicNumberIsReached();
	//Calculator(4, 5);
	//ValideazaInceputul();
	int arr[9] = { 9, 4, 7, 5, 3, 8, 6, 1, 2};
	int size = sizeof(arr) / sizeof(int);

	int* quickSortResult = quickSort(arr, size);

	for (int i = 0; i < size; i++)
	{
		std::cout << *(quickSortResult+i) << std::endl;
	}

	delete[] quickSortResult;
	return 0;
}
