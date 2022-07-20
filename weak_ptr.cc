#include <iostream>
#include <memory>

class A;
class B;

class A{
public:
	std::weak_ptr<B> pointer;
	A()
	{
		std::cout << "init A" << std::endl;
	}
	~A()
	{
		std::cout << "free A" << std::endl;
	}
};

class B{
public:
	std::shared_ptr<A> pointer;
	B()
	{
		std::cout << "init B" << std::endl;
	}
	~B()
	{
		std::cout << "free B" << std::endl;
	}
};


int main()
{
	auto a = std::make_shared<A>();

	do{
		auto b = std::make_shared<B>();

		a->pointer = b;
		b->pointer = a;

		std::cout << "weak pointer expire:" << a->pointer.expired() << std::endl;
	}while(0);

	std::cout << "weak pointer expire:" << a->pointer.expired() << std::endl;


	return 0;
}
