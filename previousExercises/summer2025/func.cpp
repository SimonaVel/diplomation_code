#include <cmath>
#include <string>
#include <iostream>
using namespace std;

// inclusive, so [0, 10^n] (based on explanation in exercise notion)
unsigned countUniqueNumbers(unsigned n) {
    if(n == 0) return 0;
    unsigned count = 0;
    // if arr[x] = 1 => digit encountered; digits 0, 1, ... 9
    for(unsigned i = 1; i <= (pow(10, n)); i++) {
        string s = to_string(i);
        bool arr[10] = {0};
        bool unique = true;
        for(int z = 0; z < s.length(); z++) {
            unsigned digit = s[z] - '0';
            if(arr[digit]){ // already seen
                unique = false;
                break;
            }
            arr[digit] = true;
        }
        if(unique) count++;
    }
    return count;
}

// exclusive, so [10^n-1, 10^n] (based on output in exercise notion)
// unsigned countUniqueNumbers(unsigned n) {
//     if (n == 0) return 0;
//     unsigned count = 0;
//     for (unsigned j = pow(10, n-1); j < pow(10, n); j++) {
//         string s = to_string(j);
//         bool arr[10] = {0};
//         bool unique = true;
//         for (int z = 0; z < s.length(); z++) {
//             int digit = s[z] - '0';
//             if (arr[digit]) { // digit already seen
//                 unique = false;
//                 break;
//             }
//             arr[digit] = true;
//         }
//         if (unique) count++;
//     }
//     return count;
// }
