#include <iostream>
#include <vector>
#include <algorithm>

//int main()
//{
//	int i = 2;
//	int k = 3;
//
//	auto addint = [](int a, int b)
//	{
//		return a + b;
//	};
//	std::cout << addint(i, k);
//}


//int main()
//{
//	std::vector<int> v = { 0,1,2,3,4,5,6,7,8,9 };
//	const int N = 10;
//	for (const auto& item : v)std::cout << item << ' ';
//	std::cout << std::endl;
//
//	std::transform(v.begin(), v.end(), v.begin(), [=](const auto& item) {return N * item; });
//
//	for (const auto& item : v)std::cout << item << ' ';
//	std::cout << std::endl;
//}

//class foo
//{
//private :
//	int i;
//
//public:
//	Foo(int val) : i(val) {}
//
//	void Test(int _param)
//	{
//		auto lamb = [this](int val)
//		{
//			i = val;
//		};
//		lamb(_param);
//	}
//
//	int Get()
//	{
//		return i;
//	}
//};


int main()
{
	int a = 5;
	int b = 5;
	//add<int> obj;

	auto add = [](auto a, auto b)
	{
		return a + b;
	};

	//std::cout << obj(a, b) << std::endl;
	std::cout << add(a, b) << std::endl;

	return 0;
}
