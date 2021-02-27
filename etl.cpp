#include "etl.h"

namespace etl {
    std::map<char, int> transform(std::map<int, std::vector<char>> const &old){
        std::map<char, int> newMap;
        for (auto const &pair : old){
            for (unsigned char letter : pair.second){
                newMap.emplace(std::tolower(letter), pair.first);
            }
        }
        return newMap;
    }

}  // namespace etl