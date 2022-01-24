#include "Replace.hpp"

Replace::Replace(const std::string &s1, const std::string &s2) : s1(s1), s2(s2) {
	return;
}

Replace::~Replace(void) {
	if (ifs.is_open())
		ifs.close();
	if (ofs.is_open())
		ofs.close();
}

void	Replace::set_iofilename(const std::string &ifn, const std::string &of_postfix) {
	this->ifn = ifn;
	this->ofn = ifn + of_postfix;
}

int	Replace::empty_str(void) const {
	if (!s1.length() || !s2.length()) {
		std::cout << "Error! Empty arguments values!"<< std::endl;
		return 0;
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
	int			first_entry(0);
	size_t		found(0);
	size_t		old_pos(0);
	std::string	result;

	if (!empty_str())
		return 0;
	if (!iof_is_open())
		return 0;

	ifs.seekg(0, std::ios::end);
	size_t size = ifs.tellg();
	std::string buffer(size, ' ');
	ifs.seekg(0);
	ifs.read(&buffer[0], size);
	
	while ((found = buffer.find(s1, found)) && found != buffer.npos) {
		result += first_entry++ ? buffer.substr(old_pos, found - old_pos) : buffer.substr(0, found);
		result += s2;
		old_pos = found++ + s1.length();
	}
	ofs << result;
	return 1;
}
