#include "CString.h"
#include <cstring>

// default constructor
CString::CString(){}

// constructor with parameters
CString::CString(char* niz, int maxSize): niz(niz), maxSize(maxSize) {}

// copy constructor
CString::CString(const CString& copyCString){
    this->maxSize = copyCString.maxSize;
    this->niz = new char[strlen(copyCString.niz) + 1];
    strcpy_s(this->niz, strlen(copyCString.niz) + 1, copyCString.niz);
}

// overriden =
CString& CString::operator=(const CString& rhs) {
    if (this != &rhs) {
        delete[] this->niz;  // Free existing memory
        this->niz = new char[strlen(rhs.niz) + 1];
        strcpy_s(this->niz, strlen(rhs.niz) + 1, rhs.niz);
        maxSize = rhs.maxSize;
    }
    return *this;
}

// destructor
CString::~CString() {
    if(niz != nullptr) {
        delete [] niz;
    }
}

// get & set
const char* CString::getNiz() const { return niz; }

void CString::setNiz(const char* newNiz) {
    if (this->niz != nullptr) {
        delete[] this->niz;
    }
    this->niz = new char[strlen(newNiz) + 1];
    strcpy_s(this->niz, strlen(newNiz) + 1, newNiz);
    this->maxSize = strlen(newNiz);
}

int CString::getMaxSize() const { return maxSize; }
void CString::setMaxSize(int newSize) {
    maxSize = newSize;
}

void CString::copyNiz(char* to, char* from, int size) {
    // if from is empty, return
    if(from == nullptr) return;
    // if to is empty -> allocate memory
    if(to == nullptr) {
        to = new char[size];
    }
    // else, loop through [] and write values
    for(int i = 0; i < size; i++) {
        to[i] = from[i];
    }
}

int CString::compareNizove(char* lhs, char* rhs) {
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

std::vector<unsigned> CString::findOccurrences(const char* niz, const char* subNiz) {
    unsigned nizSize = strlen(niz);
    unsigned subNizSize = strlen(subNiz);
    std::vector<unsigned> occurrences;

    if (subNizSize == 0 || subNizSize > nizSize) {
        return occurrences; // no matches possible
    }

    for (unsigned i = 0; i <= nizSize - subNizSize; i++) {
        unsigned j = 0;
        while (j < subNizSize && niz[i + j] == subNiz[j]) {
            j++;
        }
        if (j == subNizSize) {
            occurrences.push_back(i);
        }
    }
    return occurrences;
}
