#ifndef CString_H
#define CString_H

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
        char* getNiz();
        void setNiz(char* newNiz);

        int getMaxSize();
        void setMaxSize(int newSize);

        // copy
        void copyNiz(char* to, char* from, int size);

        // compare
            // Negative value if lhs appears before rhs in lexicographical order.
            // Zero if lhs and rhs compare equal.
            // Positive value if lhs appears after rhs in lexicographical order.
        int compareNizove(char* lhs, char* rhs) {
            while (*lhs && *rhs) {
                if (*lhs != *rhs)
                    return (*lhs < *rhs) ? -1 : 1; // различни символи → връщаме резултат
                lhs++;
                rhs++;
            }
            // ако стигнем тук, поне един низ е приключил
            if (*lhs == *rhs) return 0;   // еднакви са
            return (*lhs == '\0') ? -1 : 1; // по-късият е по-малък
        }

        // find matches
        unsigned* findOccurances(char* niz, char* subNiz, unsigned occurancesIndex = 0);

        // input

        // output
};

#endif