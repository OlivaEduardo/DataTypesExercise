//Data types sizes will be tested in this exercise

#include <stdio.h>
#include <iostream>
#include <limits.h>

int main()
{
	//Data types sizes printings
	printf_s("Size of Short Int: %d \n", sizeof(short int));	 
	printf_s("Size of Int: %d \n", sizeof(int));				
	printf_s("Size of Float: %d \n", sizeof(float));			
	printf_s("Size of Double: %d \n", sizeof(double));			
	printf_s("Size of Long: %d \n", sizeof(long));				
	printf_s("Size of Long Long: %d \n", sizeof(long long));
	printf_s("Size of Size_t: %d \n", sizeof(size_t));

	//Different numeric types printings for a same value with 2 diferent functions
	char sample = 65;

	printf_s("\nValor decimal con printf_s: %d \n", sample);
	printf_s("Valor hexadecimal con printf_s: %x \n", sample);
	printf_s("Valor octal con printf_s: %o \n", sample);
	printf_s("Valor caracter con printf_s: %c \n", sample);

	std::cout << "\nValor decimal con cout: " << std::dec << static_cast<int>(sample) << " \n";
	std::cout << "Valor hexadecimal con cout: " << std::hex << static_cast<int>(sample) << " \n";
	std::cout << "Valor octal con cout: " << std::oct << static_cast<int>(sample) << " \n" << std::dec;
	std::cout << "Valor caracter con cout: " << sample << " \n\n";

	//Numeric limits for data type printings
	std::cout << "\nLimite minimo de Short Int (cout): " << std::numeric_limits<short int>::min() << " \n";
	std::cout << "Limite maximo de Short Int (cout): " << std::numeric_limits<short int>::max() << " \n";
	std::cout << "Limite minimo de Int (cout): " << std::numeric_limits<int>::min() << " \n";
	std::cout << "Limite maximo de Int (cout): " << std::numeric_limits<int>::max() << " \n";
	std::cout << "Limite minimo de Float (cout): " << std::numeric_limits<float>::min() << " \n";
	std::cout << "Limite maximo de Float (cout): " << std::numeric_limits<float>::max() << " \n";
	std::cout << "Limite minimo de Double (cout): " << std::numeric_limits<double>::min() << " \n";
	std::cout << "Limite maximo de Double (cout): " << std::numeric_limits<double>::max() << " \n";
	std::cout << "Limite minimo de Long (cout): " << std::numeric_limits<long>::min() << " \n";
	std::cout << "Limite maximo de Long (cout): " << std::numeric_limits<long>::max() << " \n";
	std::cout << "Limite minimo de Long Long (cout): " << std::numeric_limits<long long>::min() << " \n";
	std::cout << "Limite maximo de Long Long (cout): " << std::numeric_limits<long long>::max() << " \n";
	std::cout << "Limite maximo de Size_t (cout): " << std::numeric_limits<size_t>::min() << " \n";
	std::cout << "Limite maximo de Size_t (cout): " << std::numeric_limits<size_t>::max() << " \n";

	//Comparison between a same value defined as signed and unsigned
	int a = 0xFFFFFFFF;
	unsigned int b = 0xFFFFFFFF;

	std::cout << "\nValor de a: " << a << "\n"; //The hexa expression 0xFFFFFFFF represents the first negative decimal number because the signed data type divides it maximum size between positive and negative values.
	std::cout << "Valor de b: " << b << "\n"; //This will represent the maximum positive value possible as the unsigned data type doesn't divide its size to represent negative values but just represent positive ones.

	//Array
	//Array declaration
	const short int arraySize = 5;
	int myArray[arraySize];

	//Array loading
	std::cout << "\nIngresar 5 elementos numericos enteros: \n";
	for (short int i = 0; i < arraySize; i++)
	{
		std::cout << "Ingrese valor para la posicion " << i + 1 << "\n";
		std::cin >> myArray[i];
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	//Array reading
	for (short int i = 0; i < arraySize; i++)
	{
		std::cout << "El valor en la posicion " << i + 1 << " es: " << myArray[i] << "\n";
	}

	return 0;
}