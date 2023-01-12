#include <no_strings_attached/string_trim.h>
#include <iostream>
#include <string>
#include <vector>

using no_strings_attached::Side;

int main(){
    
std::string string_to_be_trimmed;
char char_to_trim =' ';

std::cout << "Example program that trims strings."<<std::endl;
std::cout << "Please enter a string:"<<std::endl;
std::getline(std::cin, string_to_be_trimmed);

// std::string Trimmed_string = no_strings_attached::Trim(string_to_be_trimmed,char_to_trim,Side::kLeft);
// std::cout << "Your trimmed string: ";
// std::cout <<"'"<< Trimmed_string <<"'";
// std::cout <<std::endl;

std::string Trimmed_string = no_strings_attached::Trim(string_to_be_trimmed);
std::cout << "Your trimmed string: ";
std::cout <<"'"<< Trimmed_string <<"'";
std::cout <<std::endl;

return 0;
}
