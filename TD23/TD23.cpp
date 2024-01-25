#include <iostream>

int main()
{
	int a = 3;

	auto localInt = [&a]() { a = 8; };

	localInt();

	std::cout << "nouvelle valeur : " << a << std::endl;

	int e = 5;

	if (std::greater<int>()(e, 3))
	{
		return true;
	}
}

