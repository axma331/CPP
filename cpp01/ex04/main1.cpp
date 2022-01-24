#include <iostream>
#include <fstream>

int main(int ac, const char *av[]) {
	if (ac != 4)
		return 1;
	std::string inf(av[1]);
	std::string outf(inf + ".replace");
	std::string s1(av[2]);
	std::string s2(av[3]);
	if (!s1.length() || !s2.length()) {
		std::cout << "Error! Empty arguments values!"<< std::endl;
		return 1;
	}
	std::ifstream in(inf);
	if (!in.is_open())
		std::cout << "Error! File is not open!" << std::endl;
	std::ofstream out(outf);
	if (!out.is_open())
		std::cout << "Error! File is not found!" << std::endl;

	for (char ch(0); in.get(ch);out << ch)
	{
				std::cout << "poz out\t"<< out.tellp() << std::endl;
				std::cout << "poz in\t"<< in.tellg() << std::endl;
		int i = 0;
		if (ch == s1[i++])
		{
			int poz_o = out.tellp(); 		//std::cout << "poz out\t"<< out.tellp() << std::endl;
			int poz_i = in.tellg(); 		//std::cout << "poz in\t"<< in.tellg() << std::endl;
			
			while(i != s1.length() && in.get(ch)) {
				std::cout << i << std::endl;
				if (s1[i] != ch)
					break;
				++i;
			}
											//std::cout << "s1\t"<< s1.length() << " - " << i << std::endl;
			if (i == s1.length()) {			//zamena
											//std::cout << "s2\t"<< s2.length() << " - " << i << std::endl;
				for (i = 0; i != s2.length(); ++i)
					out << s2[i];
			}
			else {
				std::cout << "poz out\t"<< out.tellp() << std::endl;
				std::cout << "poz in\t"<< in.tellg() << std::endl;
				in.seekg(poz_i);
				std::cout << "poz out\t"<< out.tellp() << std::endl;
				std::cout << "poz in\t"<< in.tellg() << std::endl;
				// in.get(ch);
				// out << ch;
			}
			// 	while(i-- && in.get(ch))
			// }
			// for (i = 0; ch == s2[i]; ++i)
			// 	in.get(ch);
				// std::cout << s2[i];
				// if (!s2[i + 1])
				// 	std::cout << "\n";

		}
	}

	in.close();
	out.close();
	return 0;
}
