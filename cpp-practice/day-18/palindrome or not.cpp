#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int left = 0; 
    int right = 4;
    bool isPalindrome = true;

    while(left < right){
        if(arr[left] != arr[right]){
            isPalindrome = false;
            break;
        }else{
            left++;
            right--;
        }
    }

    if(isPalindrome){
        cout << "Palindrome";
    }else{
        cout << "Not a palindrome";
    }
    return 0;
}
