#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void);
void	identify(Base* p);
// void	identify(Base& p);

int main() {
	srand(time(0));
	return 0;
}

Base*	generate(void) {
	switch (rand() % 3 + 1)
	{
		case 1:	return new A;
		case 2:	return new B;
		case 3:	return new C;
	}
	return NULL;
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknaw type!" << std::endl;
}

void	identify(Base& p) {

}

