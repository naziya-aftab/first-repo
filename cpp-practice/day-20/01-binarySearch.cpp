#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int target = 20;
    int st = 0;
    int end = 6;
    int found = -1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == target)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (found != -1)
    {
        cout << found;
    }
    else
    {
        cout << -1;
    }
    return 0;
}