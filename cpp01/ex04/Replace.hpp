#include <iostream>
#include <fstream>
#include <string>


class Replace {
public:
	Replace(const std::string &s1, const std::string &s2);
	~Replace(void);

	void	set_iofilename(const std::string &ifn, const std::string &of_postfix);
	int		check_length(void) const;	
	int		iof_is_open(void);	
	void	getValue(void) const;
	int		replace(void);

private:
	std::string		s1;
	std::string		s2;
	std::string		ifn;
	std::string		ofn;
	std::ifstream	ifs;
	std::ofstream	ofs;
};