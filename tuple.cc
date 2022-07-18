#include <iostream>
#include <tuple>
#include <string>

std::tuple<int, std::string, double> _test_tuple()
{
	return std::make_tuple(1, "test_string", 1.02323);
}

int main()
{
	auto[_int, _string, _double] = _test_tuple();

	std::cout << _int << _string << _double << std::endl;
	return 0;
}
