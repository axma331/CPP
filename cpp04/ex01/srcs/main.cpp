#include "Dog.hpp"
#include "Cat.hpp"

#define N	4

int main() {

	Animal *A[N];
	int i(0);
	for(; i < N; ++i)
		!(i % 2) ? A[i] = new Cat(): A[i] = new Dog();
	for (i = 0; i < N; ++i)
		std::cout << A[i]->getType() << std::endl;
	std::cout << std::endl;
	for (i = 0; i < N; ++i)
		delete A[i];
	return 0;
}
