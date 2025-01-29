#include <iostream>


float pi = 3.145927f;

//power function
float power(const float x, const int y)
{
	float xPowerY = 1.0f;
	for (unsigned int i = 0; i < y; i++)
	{
		xPowerY *= x;
	}

	return xPowerY;
}

//degrees to Radians Function
float radians(const float angle)
{
	return angle * pi / 180.0f;
}

int main()
{
	std::cout << "Hello World\n" << std::endl;

	//degrees to radians conversion

	float angleInDegrees = 45.00f;


	float angleInRadians = angleInDegrees * pi / 180.0f;

	//output result

	std::cout << angleInDegrees << " degrees is equal to "
		<< angleInRadians << " radians." << std::endl;

	//Determine wether it is acute or obtuse
	std::cout << "\nIf statements\n---------------" << std::endl;
	std::cout << angleInDegrees << " degrees is an ";

	if (angleInDegrees < 90)
		std::cout << "acute angle." << std::endl;

	else
		std::cout << " obtuse angle." << std::endl;


	//For Loops
	
	std::cout << "\nFor loop\n-----" << std::endl;
	int powerOfTwo = 1;

	for (unsigned int i = 0; i < 10; i++)
	{
		powerOfTwo *= 2;
		std::cout << "2^" << i + 1 << " = " << powerOfTwo << std::endl;
	}

	//Count the number of steps the collatz sequence takes to reach 1
	int n, step, nsave;
	n = 10;
	step = 0;
	nsave = n;
	std::cout << "\nWhile loop\n---------" << n;

	while(n > 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}

		else
		{
			n = 3 * n + 1;
		}

		step++;
		std::cout << " -> " << n;
	}

	std::cout << "\n\nThe Collatz sequence starting at " << nsave
		<< " took " << step << " steps to reach 1." << std::endl;

	//Arrays
	unsigned int myArray[] =
	{
		3, 1, 4, 1, 5, 9, 2, 6, 5
	};

	std::cout << "\nArrays\n-----" << std::endl;

	for (unsigned int i = 0; i < 9; i++)
	{
		std::cout << "myArray[" << i << "] = " << myArray[i] << std::endl;
	}

	std::cout << "\nSize of myArray = " << sizeof(myArray) << std::endl;

	std::cout << "\nNumber of Elements = " << sizeof(myArray) / sizeof(unsigned int) << std::endl;


	//power

	float twoPowerTen = power(2.0f, 10);

	std::cout << "\nFunctions\n-------------" << std::endl;
	std::cout << "2^10 = " << twoPowerTen << std::endl;

	//Call radians function
	float angle = angleInDegrees;
	angle = radians(angle);

	std::cout << "\n" << angleInDegrees << " degrees is equal to " << angle << " radians." << std::endl;

	//Classes
	/*
	Car delorean;
	delorean.make = "Delorean";
	delorean.model = "DMC-12";
	delorean.year = 1981;
	*/


	Car delorean("DeLorean", "DMC-12", 1981);
	std::cout << "\nClasses\n---------" << std::endl;
	delorean.outputDetails();

	//accelerate the delorean
	delorean.accelerate(88.0f);

	//Conver speed from mph to kph
	std::cout << "\n" << 88 << " mph is equivalent to " << Car::mph2kph(88.0f) << " kph." << std::endl;

	return 0;
}
