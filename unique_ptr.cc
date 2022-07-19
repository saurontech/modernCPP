#include <iostream>
#include <memory>

class unique_class{
private:
	std::string m_name = "default name";
public:
	std::string getname()
	{
		return m_name;
	}
	unique_class()
	{
		std::cout << "unique_class init:" << m_name << std::endl;
	}

	unique_class(std::string input)
	{
		m_name = input;
		std::cout << "unique_class init:" << m_name << std::endl;
	}
	
	~unique_class()
	{
		std::cout << "unique_class del:" << m_name << std::endl;
	}
};


int main()
{
	auto ptr1 = std::make_unique<unique_class>("obj 1");
	std::cout << "moving ptr1 to ptr2" << std::endl;
	auto ptr2 = std::move(ptr1);
	
	do{
		auto ptr3 = std::make_unique<unique_class>();
		if(ptr1){
			std::cout << "get name of ptr1" << ptr1->getname() << std::endl;
		}else{
			std::cout << "ptr1 is empty" <<  std::endl;
		}

		if(ptr2){
			std::cout << "get name of ptr1" << ptr2->getname() << std::endl;
		}else{
			std::cout << "ptr2 is empty" <<  std::endl;
		}
		std::cout << "moving ptr2 to ptr1" << std::endl;

		ptr1 = std::move(ptr2);

	}while(0);
	
	
	if(ptr1){
		std::cout << "get name of ptr1" << ptr1->getname() << std::endl;
	}else{
		std::cout << "ptr1 is empty" <<  std::endl;
	}

	if(ptr2){
		std::cout << "get name of ptr1" << ptr2->getname() << std::endl;
	}else{
		std::cout << "ptr2 is empty" <<  std::endl;
	}

	return 0;
}
