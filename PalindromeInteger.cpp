// PalindromeInteger.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

bool isPalindrome(int A)
{
    // 1-9 is a palindrome
    if (A < 10 && A > 0)
    {
        return true;
    }

    // walk through the characters in the number and confirm it's a palindrome
    string s = to_string(A);
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << isPalindrome(1221) << " is true" << endl;
    cout << isPalindrome(123) << " is false" << endl;
    cout << isPalindrome(1) << " is true" << endl;
    return 0;
}

