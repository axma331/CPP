#include "MutantStack.hpp"

int main() {
	MutantStack<int> mutant;
	mutant.push(5);
	mutant.push(17);
	std::cout << "value on stack top " << mutant.top() << std::endl;
	mutant.pop();
	std::cout << "size " << mutant.size() << std::endl;
	mutant.push(3);
	mutant.push(5);
	mutant.push(737);
	mutant.push(0);
	MutantStack<int>::iterator it = mutant.begin();
	MutantStack<int>::iterator ite = mutant.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << "#" << *it << std::endl;
		++it;
	}
	std::cout << "size " << mutant.size() << std::endl;
	std::stack<int> other_s(mutant);
	MutantStack<int> s(mutant);

	std::cout << "\n\n";
	std::cout << "S size " << s.size() << std::endl;
	for (int i = 0 ; i < 5000 ; i++)
		s.push(i);
	std::cout << "S size " << s.size() << std::endl;
	std::cout << "TOP in S " << s.top() << std::endl;
	for (int i = 0 ; i < 2000; i++ )
		s.pop();
	std::cout << "S size " << s.size() << std::endl;
	MutantStack<int>::iterator begIT = s.begin();
	std::cout << *begIT << std::endl;

	return 0;
}