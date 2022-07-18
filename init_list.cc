#include <initializer_list>
#include <vector>
#include <iostream>

class initlistexample{
public:
	std::vector<int> datalist;
	initlistexample(std::initializer_list<int> input)
	{
		for(auto it = input.begin(); it != input.end(); it++){
			datalist.push_back(*it);
		}
	}
};


int main()
{
	initlistexample _m_example = {1, 11, 22, 33, 123, 555};

	std::cout << "datalist: ";
	for(auto it = _m_example.datalist.begin(); it != _m_example.datalist.end(); it++){
		std::cout << *it << " ";
	}

	std::cout << std::endl;

	return 0;
}
