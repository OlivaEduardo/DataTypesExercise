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

	//Diferent numeric types printings for a same value with 2 diferent functions
	char sample = 65;

	printf_s("\nValor decimal con printf_s: %d \n", sample);
	printf_s("Valor hexadecimal con printf_s: %x \n", sample);
	printf_s("Valor octal con printf_s: %o \n", sample);
	printf_s("Valor caracter con printf_s: %c \n", sample);

	std::cout << "\nValor decimal con cout: " << std::dec << static_cast<int>(sample) << " \n";
	std::cout << "Valor hexadecimal con cout: " << std::hex << static_cast<int>(sample) << " \n";
	std::cout << "Valor octal con cout: " << std::oct << static_cast<int>(sample) << " \n";
	std::cout << "Valor caracter con cout: " << sample << " \n\n" << std::dec;

	//Numeric limits for data type printings
	printf_s("Limite minimo de Short Int con printf: %d \n", std::numeric_limits<short int>::min());
	printf_s("Limite maximo de Short Int con printf: %d \n", std::numeric_limits<short int>::max());
	printf_s("Limite minimo de Int con printf: %d \n", std::numeric_limits<int>::min());
	printf_s("Limite maximo de Int con printf: %d \n", std::numeric_limits<int>::max());
	printf_s("Limite minimo de Float con printf: %f \n", std::numeric_limits<float>::min());
	printf_s("Limite maximo de Float con printf: %f \n", std::numeric_limits<float>::max());
	printf_s("Limite minimo de Double con printf: %f \n", std::numeric_limits<double>::min());
	printf_s("Limite maximo de Double con printf: %f \n", std::numeric_limits<double>::max());
	printf_s("Limite minimo de Long con printf: %d \n", std::numeric_limits<long>::min());
	printf_s("Limite maximo de Long con printf: %d \n", std::numeric_limits<long>::max());
	printf_s("Limite minimo de Long Long con printf: %d \n", std::numeric_limits<long long>::min());
	printf_s("Limite maximo de Long Long con printf: %d \n", std::numeric_limits<long long>::max());
	printf_s("Limite minimo de Size_t con printf: %d \n", std::numeric_limits<size_t>::min());
	printf_s("Limite maximo de Size_t con printf: %d \n", std::numeric_limits<size_t>::max());

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

	std::cout << "\nValor de a: " << a << "\n"; //-1
	std::cout << "Valor de b: " << b << "\n"; //Max positive value

	//Array
	//Array declaration
	int myArray[5];

	//Array loading
	std::cout << "\nIngresar 5 elementos numericos enteros: \n";
	for (short int i = 0; i < 5; i++)
	{
		std::cout << "Ingrese valor para la posicion " << i + 1 << "\n";
		std::cin >> myArray[i];
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	//Array reading
	for (short int i = 0; i < 5; i++)
	{
		std::cout << "El valor en la posicion " << i + 1 << " es: " << myArray[i] << "\n";
	}

	short int cut = 0;
	scanf_s("d%", cut);
	return cut;
}