#include "isogram.h"
#include <string>
#include <cctype>
#include <unordered_set>
#include <iostream>

namespace isogram {
    bool is_isogram(const std::string& str) {
        std::unordered_set<char> dupCheck;
        for (unsigned char c : str){
            if (std::isalpha(c)){
                if (!std::get<1>(dupCheck.emplace(std::tolower(c)))){
                    return false;
                }
            }
        }
        return true;
    }
}  // namespace isogram