#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>
#include <algorithm>

namespace nucleotide_count {
    class counter {
    public:
        counter(const std::string &dna);
        int count(const char nucleotide) const;
        const std::map<char, int> nucleotide_counts() const;

    private:
        std::map<char, int> nCount;
    };
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H