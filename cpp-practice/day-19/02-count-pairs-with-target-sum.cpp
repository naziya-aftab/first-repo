#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int st = 0;
    int end = 5;
    int target = 7;
    int count = 0;

    while (st < end)
    {
        int sum = arr[st] + arr[end];
        if (sum == target)
        {
            count++;
            st++;
            end--;
        }
        else if (sum < target)
        {
            st++;
        }
        else
        {
            end--;
        }
    }

    cout << count;

    return 0;
}