#include <iostream>
using namespace std;

class Solution {
public:
    long long countGoodNumbers(long n, long current_pos = 0) {
        long choices;
        if (n == 0)
            return 1;
        
        if (current_pos == n)
            return 1;

        if ((current_pos % 2) == 0) {
            choices = 5;
        } else {
            choices = 4;
        }
        
        return choices * countGoodNumbers(n, current_pos + 1);
    }
};

int main() {
    long n;
    cout << "Enter the value of n: ";
    cin >> n;

    Solution sol;
    long long result = sol.countGoodNumbers(n);  // the result
    cout << "Total number of good digit strings of length " << n << " is: " << result << endl;
    
   return 0;
}
