// Homework 2
// Fortune teller program
// It will receive some inputs from the user and will tell them which type of
// C++ programmer they are.

#include <array>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;
using std::vector;

int main() {

  cout << "Welcome to the fortune teller program!" << endl;
  cout << "Please enter your name:" << endl;

  string name{};
  cin >> name;

  cout << "Please enter the time of year when you were born:\n(pick from "
          "'spring', 'summer', 'autumn', 'winter')"
       << endl;

  string season{};
  cin >> season;

  cout << "Please enter an adjective:" << endl;
  string adjective1{};
  cin >> adjective1;

  cout << "Please enter another adjective:" << endl;
  string adjective2{};
  cin >> adjective2;

  // Fortune teller program
  vector<string> adjectives{adjective1, adjective2};

  unsigned adj_idx = name.size() % adjectives.size();

  map<string, string> noun = {{"spring", "STL guru"},
                              {"summer", "C++ expert"},
                              {"autumn", "coding beast"},
                              {"winter", "software design hero"}};

  array<string, 3UL> ending = {"eats UB for breakfast",
                               "finds errors quicker than the compiler",
                               "is not afraid of C++ error messages"};

  unsigned end_idx = name.size() % ending.size();

  // Resulting message
  cout << "\nHere is your description:" << endl;
  cout << name << ","
       << " the " << adjectives.at(adj_idx) << " " << noun.at(season) << " that "
       << ending.at(end_idx) << endl;
}
