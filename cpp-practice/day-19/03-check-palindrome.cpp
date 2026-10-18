#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int st = 0;
    int end = 4;
    bool isPalindrome = true;

    while (st < end)
    {
        if (arr[st] != arr[end])
        {
            isPalindrome = false;
            break;
        }
        else
        {
            st++;
            end--;
        }
    }

    if (isPalindrome)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}