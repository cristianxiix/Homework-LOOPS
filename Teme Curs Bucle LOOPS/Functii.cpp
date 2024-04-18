#include "Functii.h"
void LaunchCountdown(int seconds)
{
	for (int i = seconds; i > 0; i--)
	{
		std::cout << "Seconds to launch " << i << std::endl;
	}
	std::cout << "Launching NOW\n";
}
const int SumaNumerelorNaturaleUntilIndex(int& index)
{
	std::cout << "Va rugam sa introduceti indexul pentru a rula functia: " << std::endl;
	std::cin >> index;
	int total = 0;
	for (int i = index; i > 0; i--)
	{
		total += i;
	}
	return total;
}
const bool CheckIfNumberISPrime(int number)
{
	int z = number / 2; // default z to 0 if you want to use the forLoop
	int it = 2;
	/*for (int i = 2; i <= number / 2; i++)
	{
		z = number / 2;
		if (number % i != 0)
		{

			continue;
		}
		else
		{
			std::cout << "Number " << number << " is NOT prime" << std::endl;
			break;
		}
		//std::cout << "Number " << number << " is prime" << std::endl;
	}*/
		while (it <= z)
		{
			if (number % it != 0)
			{
				it++;
				continue;
			}
			else
			{
				std::cout << "Number " << number << " is NOT prime" << std::endl;
				return false;
			}
			
		}

		std::cout << "Number " << number << " is prime" << std::endl;

	return true;
}
void PyramidPattern(int rows)
{
	
	std::string steluta = "*";
	int centered = 25;
	for (int i = 1; i <= rows; i++)
	{
		std::cout << std::setw(centered) << steluta << std::endl;
		steluta += "**";
		centered += 1;
	}
}
int returnGCD(int Bigger, int Smaller)
{
	int remainder = 100;
	int div = 0;
	int LKRemainderDifZero;
	if (Smaller > Bigger)
	{
		remainder = Bigger;
		Bigger = Smaller;
		Smaller = remainder;
		remainder = 0;
	}
	
		remainder = Bigger % Smaller;
		div = Bigger / Smaller;
		Bigger = Smaller * div + remainder;
		LKRemainderDifZero = remainder;

	
	while (remainder != 0)
	{
		div = Smaller / remainder;
		remainder = Smaller % remainder;
		Smaller = LKRemainderDifZero * div + remainder;
		if (remainder != 0)
		{
			Smaller = LKRemainderDifZero;
			LKRemainderDifZero = remainder;
		}
	}
	
	return LKRemainderDifZero;
}
int decimalToBinary(int number)
{
	int remainder = 0;
	std::string finalNumberString;
	std::string temp;

	while (number > 0)
	{
		remainder = number % 2;
		number = number / 2;
		temp += std::to_string(remainder);
	}
	for (int i = temp.length()-1; i >= 0; i--)
	{
		int test = temp[i];
		finalNumberString.push_back(test);
	}
	
	int result = stoi(finalNumberString);
	std::cout << result;
	return result;
}
void untilMagicNumberIsReached()
{
	std::cout << "Please input a random number to guess, up to 30\n";
	int input;
	int random = rand() % 30 + 1;
	std::cin >> input;
	srand(time(NULL));
	int tries = 1;
	do
	{
		if (input == random)
		{
			
			std::cout << "You guessed the random number!" << std::endl;
			std::cout << "Number was " << random << std::endl;
			std::cout << "You ve tried to guess " << tries << " times";
			break;
		}
		tries++;
		std::cout << "Incorrect! Try again" << std::endl;
		std::cin >> input;

		
	}while (input != NULL);
	
}
void Calculator(int op1, int op2)
{
	int operatiune = 0;
	int z = 0;
	do
	{
		const char* X = R"(1.Adunare
2.Scadere
3.Inmultire
4.Impartire)";
		std::cout << X << std::endl;
		std::cin >> operatiune;

		switch (operatiune)
		{
		default:
		{
			std::cout << "optiune invalida, inserati din nou\n";
			std::cin >> operatiune;
		}
		case 1: std::cout << op1 + op2 << std::endl; break;
		case 2: std::cout << op1 - op2 << std::endl; break;
		case 3: std::cout << op1 * op2 << std::endl; break;
		case 4: std::cout << op1 / op2 << std::endl; break;
		}
		std::cout << "Daca doriti sa faceti o alta operatiune, va rugam sa apasati 1\nCa sa iesiti din program, apasati 2:\n";
		std::cin >> z;
		if (z == 2) break;
		std::cout << "Introduceti noi parametri:\nPrimul:" << std::endl;
		std::cin >> op1;
		std::cout << "Al doilea:" << std::endl;
		std::cin >> op2;

	} while (z != 2);

		
}
void ValideazaInceputul()
{
	int input;
	std::cout << "please input some number." << std::endl;
	do {
		std::cout << "It has to be between 1 and 100: " << std::endl;
		std::cin >> input;
	}
	while (input > 100 || input < 1);
	std::cout << "Thank you. Program ends.";
}
int* quickSort(int *array, int size)
{
	int temp = 0;
	int pivot = array[size - 1];
	int count = 0;
	bool x = false;
	for (int i = -1; i < size; i++)
	{
		pivot = array[size - 1];
		i = -1;
																///int arr[9] = { 9, 4, 7, 5, 3, 8, 6, 1, 2 };
		for (int j = 0; j < size; j++)							//				  1, 2, 7, 5, 3 ,8 ,6 ,9, 4
		{																//		  1, 2, 3, 5, 7, 8, 6, 9, 4
			if (array[j] < pivot)											//	  1, 2, 3, 4, 7, 8, 6, 9, 5
			{																//    1, 2, 3, 4, 5, 8, 6, 9, 7
				i++;															//1, 2, 3, 4, 5, 6, 7, 9, 8
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
			else if (array[j] == pivot)
			{
				i++;
				temp = array[i];
				array[i] = array[j];
				pivot = temp;
				array[j] = pivot;
				i = -1;
				count++;
			}
			if (count > size * 3)
			{
				x = true;
				break;
			}
		}
		if (x)
			break;
	}


	int* result = (int*)malloc(sizeof(int) * size);
	memcpy(result, array, sizeof(result)*size);
	/*for (int i = 0; i < size; i++)
	{
		std::cout << result[i];
	}*/
	return result;
}



