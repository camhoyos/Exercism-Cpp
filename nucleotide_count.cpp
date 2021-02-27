#include <cstring>
#include "nucleotide_count.h"

namespace nucleotide_count {

    counter::counter(const std::string &dna) {
        if(dna.find_first_not_of("ATCG")!=std::string::npos){
            throw std::invalid_argument("Invalid nucleotide!");
        }

        nCount= {{'A', 0},
                 {'T', 0},
                 {'C', 0},
                 {'G', 0}};
        for(char c: dna){
            nCount[c]+=1;
        }
    }

    int counter::count(const char nucleotide) const{
        if(std::strchr("ATCG",nucleotide)==NULL){
            throw std::invalid_argument("Invalid nucleotide!");
        }
        return nCount.at(nucleotide);
    }

    const std::map<char, int> counter::nucleotide_counts() const {
        return nCount;
    }
}  // namespace nucleotide_count