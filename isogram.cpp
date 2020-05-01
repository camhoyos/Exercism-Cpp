#include "isogram.h"
#include <string>
#include <ctype.h>

namespace isogram {
    bool is_isogram(std::string str){
        char tempChar;
        char matchChar;
        // Check against empty string, if so, pass true.
        if (str.length() == 0){
            return true;
        }
        //Record single character and force lower to account for upper & lower case.
        for (unsigned int i = 0; i < str.length()-1 ; ++i){
            tempChar = tolower(str.at(i));
            //Ignore non-alpha characters
            if (isalpha(tempChar)==0){
                continue;
            } else {
                //Confirmed character is alpha, therefor loop through each character after the first recorded character.
                for (unsigned int j = i+1; j < str.length() ; ++j) {
                    matchChar = tolower(str.at(j));
                    //If a match is found, return false
                    if (tempChar == matchChar){
                        return false;
                    }
                }
            }
        }
        //At this point, no match would be found, therefor it is an isogram
        return true;
    }

}  // namespace isogram