#include <string>
#include <vector>
#pragma once

namespace no_strings_attached{

    enum class Side {kLeft,kRight,kBoth}; // 💡  This enum class should be defined here (not in string_trim.cpp)

    std::string Trim(const std::string& , char , Side);
    std::string Trim(const std::string& );

}
