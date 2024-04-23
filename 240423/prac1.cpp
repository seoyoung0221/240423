#include <iostream>

int main()
{
	std::cout << "5단 출력\n";
	for (int i = 1; i <= 9; i++)
	{
		std::cout << "5 * " << i << "= " << 5 * i << "\n";
	}

	std::cout << "구구단 출력\n";
	for (int i = 1; i <= 9; i++)
	{
		std::cout << "-----" << i << "단-----\n";
		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << " * " << j << " = " << i * j << "\n";
		}
	}

	return 0;
}