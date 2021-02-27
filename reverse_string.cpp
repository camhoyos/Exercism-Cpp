#include "reverse_string.h"
#include <string>

namespace reverse_string {
    std::string reverse_string(std::string str){
        std::string returnStr = str;

        for (unsigned int i = 0 ; i < str.length()/2 ; i++){
            std::swap(returnStr.at(i),returnStr.at(returnStr.length()-i-1));
        }
        return returnStr;
    }

}  // namespace reverse_string