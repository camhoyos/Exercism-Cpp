#include "raindrops.h"

namespace raindrops {
    std::string convert(const int rainNum){
        std::string retString;
        retString += (rainNum % 3==0) ? "Pling" : "";
        retString += (rainNum % 5==0) ? "Plang" : "";
        retString += (rainNum % 7==0) ? "Plong" : "";
        return retString.empty() ? std::to_string(rainNum) : retString;
    }

}  // namespace raindrops
