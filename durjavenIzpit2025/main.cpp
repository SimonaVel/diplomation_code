#include <iostream>

using namespace std;

bool& flipBool(bool& val) {
    val = !val;
    return val;
}

int main() {
    int coins[] = {10, 30, 5, 8};
    int n = sizeof(coins) / sizeof(coins[0]);
    int countPlayer0, countPlayer1 = 0;
    // first player turn = 0, second player turn = 1
    bool turn = 0;

    // test if flipping func works:
    cout << "\n1? - " << flipBool(turn) << "\t" << "0? - " << flipBool(turn);

    int* left = coins;
    int* right = &coins[n-1];

    // move left test
    // cout << "\nLeft before: " << left << " "<< *left << endl;
    // cout << "\nLeft after: " << ++left << " "<< *left << endl;

    // !!! game
    while(left <= right) {
        if (*left > *right) {
            turn == 0 ? countPlayer0 += *left : countPlayer1 += *left;
            left++;
        } else { 
            turn == 0 ? countPlayer0 += *right : countPlayer1 += *right; 
            right--;
        }

        // partial scores:
        cout << "\nPlayer 1: " << countPlayer0 << endl;
        cout << "\nPlayer 2: " << countPlayer1 << endl;

        // change the turn at the end of loop
        flipBool(turn);
    }

    // results:
    cout << "\nHighest score: " << (countPlayer0 > countPlayer1 ? countPlayer0 : countPlayer1) << " points";

    return 0;
}