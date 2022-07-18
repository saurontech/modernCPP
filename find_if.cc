#include <iostream>
#include <vector>
#include <algorithm>

class person
{
private:
	std::string m_name;
	int m_age;
public:	
	person(std::string name, int age)
	{
		m_name = name;
		m_age = age;
	}

	std::string get_name()
	{
		return m_name;
	}
	
	int get_age()
	{
		return m_age;
	}
};

class findPersonByName
{
private:
	std::string m_name;
public:
	findPersonByName(std::string name)
	{
		m_name = name;
	}
	bool operator()(person _person)
	{
		return m_name == _person.get_name();
	}
};


int main()
{
	std::vector<person> _list = {person("bob", 10),
				person("tim", 20),
				person("samuel", 30)};

	auto target = find_if(_list.begin(), _list.end(), findPersonByName("bob"));

	std::cout << (*target).get_age() << (*target).get_name() << std::endl;

	return 0;
}
