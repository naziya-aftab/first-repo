#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 3, 3, 3, 3, 4};
    int target = 3;
    int st = 0;
    int end = 6;
    int count = 0;

    while (st <= end)
    {

        if (arr[st] == target)
        {
            count++;
        }
        if (st != end && arr[end] == target)
        {
            count++;
        }
        st++;
        end--;
    }

    cout << count;
    return 0;
}