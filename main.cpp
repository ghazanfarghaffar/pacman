// including libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

// including headers
#include "pacman.h"

int main()
{
	for (int i = 0; i < xSIZE; i++)
	{
		for (int j = 0; j < ySIZE; j++)
		{
			if (i == 0 || j == 0 || i == xSIZE - 1 || j == ySIZE - 1)
			{
				std::cout << "#";
			}
			else
			{
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
