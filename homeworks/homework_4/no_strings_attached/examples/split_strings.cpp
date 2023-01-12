#include <no_strings_attached/string_split.h>
#include <iostream>
#include <string>
#include <vector>

int main(){
    
std::string string_to_be_splitted;
std::string delimiter = " ";
int number_of_chunks_to_keep = 2;

std::cout << "Example program that splits strings."<<std::endl;
std::cout << "Please enter a string:"<<std::endl;
std::getline(std::cin, string_to_be_splitted);

std::vector<std::string> Splitted_string = no_strings_attached::Split(string_to_be_splitted,delimiter);
std::cout << "Your trimmed string: ";
for(auto index1:Splitted_string) {
        std::cout <<"'"<< index1 <<"'"<<' ';
    }

std::cout <<std::endl;

// std::vector<std::string> Splitted_string2 = no_strings_attached::Split(string_to_be_splitted,delimiter,number_of_chunks_to_keep);
// std::cout << "Your trimmed string2: ";
// for(auto index2:Splitted_string2) {
//         std::cout <<"'"<< index2 <<"'"<<' ';
//     }

// std::cout <<std::endl;

return 0;
}
