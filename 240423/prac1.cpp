#include <iostream>

int main()
{
	std::cout << "5�� ���\n";
	for (int i = 1; i <= 9; i++)
	{
		std::cout << "5 * " << i << "= " << 5 * i << "\n";
	}

	std::cout << "������ ���\n";
	for (int i = 1; i <= 9; i++)
	{
		std::cout << i << "�� ���\n";
		for (int j = 1; j <= 9; j++)
		{
			std::cout << i << " * " << j << " = " << i * j << "\n";
		}
	}

	return 0;
}