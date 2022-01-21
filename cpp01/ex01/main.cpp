#include <iostream>

int main (void) {
    std::string str = "HI THIS IS BRAIN";
    std::string str1 = "replase_1";
    std::string str2 = "replase_2";
    std::string *strPtr = &str;
    std::string &strRef = str;
    std::cout << "str:\t" << &str  << "\t" << str << "\nstr1:\t" << &str1  << "\t" << str1 << "\nstr2:\t" << &str2  << "\t" << str2 << std::endl;
    std::cout << "Address:\t\tValue:\n" << "str:\t" << &str  << "\t" << str << "\nstrPrt:\t" << strPtr << "\t" << *strPtr << "\nstrRef:\t" << &strRef << "\t" << strRef << std::endl;
    strRef = str2;
    std::cout << "\n" << "str:\t" << &str  << "\t" << str << "\nstrPrt:\t" << strPtr << "\t" << *strPtr << "\nstrRef:\t" << &strRef << "\t" << strRef << std::endl;
    strPtr = &str1;
    std::cout << "\n" << "str:\t" << &str  << "\t" << str << "\nstrPrt:\t" << strPtr << "\t" << *strPtr << "\nstrRef:\t" << &strRef << "\t" << strRef << std::endl;
    return 0;
}