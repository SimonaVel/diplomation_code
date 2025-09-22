#ifndef CString_H
#define CString_H

#include <vector>
#include <istream>
#include <ostream>
#include <iomanip>

class CString {
    private:
        char* niz;
        int maxSize;
    public:
        // default constructor
        CString();
        // constructor with parameters
        CString(char* niz, int maxSize);
        // copy constructor
        CString(const CString& copyCString);
        // overriden =
        CString& operator=(const CString& rhs);
        // destructor
        ~CString();

        // get & set
        const char* getNiz() const;
        void setNiz(const char* newNiz);

        int getMaxSize() const;
        void setMaxSize(int newSize);

        // copy
        void copyNiz(char* to, char* from, int size);

        // compare
            // Negative value if lhs appears before rhs in lexicographical order.
            // Zero if lhs and rhs compare equal.
            // Positive value if lhs appears after rhs in lexicographical order.
        int compareNizove(char* lhs, char* rhs);

        // find occurrences
        std::vector<unsigned> findOccurrences(const char* niz, const char* subNiz);
};

std::istream& operator>>(std::istream& is, CString& str) {
    char buffer[1024];
    is >> std::setw(1024) >> buffer; // prevents overflow
    str.setNiz(buffer);
    return is;
}

std::ostream& operator<<(std::ostream& os, const CString& str) {
    os << str.getNiz();
    return os;
}

#endif