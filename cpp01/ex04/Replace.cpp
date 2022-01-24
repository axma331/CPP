#include "Replace.hpp"

Replace::Replace(const std::string &s1, const std::string &s2) : s1(s1), s2(s2) {
	return;
}

Replace::~Replace(void) {
	std::cout << "Distructed Replace!" << std::endl;
	if (ifs.is_open())
		ifs.close();
	if (ofs.is_open())
		ofs.close();
}

void	Replace::set_iofilename(const std::string &ifn, const std::string &of_postfix) {
	this->ifn = ifn;
	this->ofn = ifn + of_postfix;
}

void	Replace::getValue(void) const {
	std::cout << "ifn\t" << ifn << std::endl;
	std::cout << "ofn\t" << ofn << std::endl;
	std::cout << "s1\t" << s1 << std::endl;
	std::cout << "s2\t" << s2 << std::endl;
	// std::cout << "buffer\t" << buffer << std::endl;
}

int	Replace::check_length(void) const {
	if (!s1.length() || !s2.length()) {
		std::cout << "Error! Empty arguments values!"<< std::endl;
	}
	return 1;
}

int	Replace::iof_is_open(void) {
	ifs.open(ifn);
	if (!ifs.is_open()) {
		std::cout << "Error! File is not open!" << std::endl;
		return 0;
	}
	ofs.open(ofn);
	if (!ofs.is_open()) {
		std::cout << "Error! File is not found!" << std::endl;
		return 0;
	}
	return 1;
}

int	Replace::replace(void) {
	if (!iof_is_open())
		return 1;
	
	ifs.seekg(0, std::ios::end);
	size_t size = ifs.tellg();
	std::string buffer(size, ' ');
	ifs.seekg(0);
	ifs.read(&buffer[0], size);

	int i(0);
	size_t found(0);
	size_t ofound(0);
	size_t diff(0);
	std::string res;
	while ((found = buffer.find(s1, found)) && found != buffer.npos) {
		diff = found - ofound;
		res += i++ ? buffer.substr(ofound, diff) : buffer.substr(0, found);
		res += s2;
		ofound = found++ + s1.length();
		std::cout << res << std::endl;
	}
	ofs << buffer;
	return 2;
}
