#include <iostream>
#include <string>
using namespace std;

bool func(int i, const string &word) 
{
    // Base case: if we reach the middle of the string
    if (i >= word.size() / 2) 
    {
        return true; //  string is a palindrome
    }
    // Checking characters from both ends
    if (word[i] != word[word.size() - i - 1]) 
    {
        return false; // string is not a palindrome
    }
    // Recursive case
    return func(i + 1, word);
}

int main()
{
    string word = "madam";
    bool isPalindrome = func(0, word);
    if (isPalindrome)
    {
        cout << "This is a palindrome." << endl;
    } else
    {
        cout << "This is not a palindrome." << endl;
    }
    return 0;
}

