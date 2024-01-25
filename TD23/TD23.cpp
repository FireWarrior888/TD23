#include <iostream>
#include <vector>

int main()
{
	//exo1
	int a = 3;

	auto localInt = [&a]()
	{
		a = 8; 
	};

	localInt();

	std::cout << "nouvelle valeur : " << a << std::endl;

	//exo2

	int e = 5;
	int g = 7;

	auto greater = [](int a, int b)
	{
		return a > b;
	};

	auto lesser = [](int a, int b)
	{
		return a < b;
	};

	std::cout << "fonction greater : " << greater(e, g) << " " << greater(g, e) << std::endl;
	std::cout << "fonction lesser : " << lesser(e, g) << " " << lesser(g, e) << std::endl;

	//exo3

	std::vector<int> vector1 = { 10, 20, 30, 40, 50 };
	std::vector<int> vector2 = { 1, 2, 3, 4, 5, -2 };

	auto choix = [](std::vector<int> vec)
	{
		for (auto i : vec) {
			if (i < 0)
				return false;
		}
		return true;
	};

	std::cout << "ensemble 1 : " << choix(vector1) << std::endl;
	std::cout << "ensemble 2 : " << choix(vector2) << std::endl;

	//exo4

	int b = 6;
	int c = 9;
	int d = 4;
	int f = 5;

	auto valeurAdd = [](int a , int b)
	{
		return a + b;
	};

	std::cout << "addition : " << valeurAdd(b , d) << std::endl;

	auto valeurSubstract = [](int a , int b)
	{
		return a - b;
	};

	std::cout << "soustraction : " << valeurSubstract(c , f) << std::endl;
}