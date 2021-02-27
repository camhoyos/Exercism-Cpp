#include "hamming.h"
#include <stdexcept>
namespace hamming {
    unsigned int compute(const std::string& dna1, const std::string& dna2){
        if (dna1.length()!=dna2.length()){
            throw std::domain_error("Sequences are not of equal length!");
        }
        unsigned int hammCount = 0;
        for (unsigned int i = 0; i < dna1.length() ; ++i){
            hammCount += (dna1[i]!=dna2[i]);
        }
        return hammCount;
    }
}  // namespace hamming