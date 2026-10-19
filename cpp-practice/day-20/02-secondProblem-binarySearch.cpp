#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {5, 10, 15, 20, 25, 30, 35, 40};
    int target = 35;
    int st = 0;
    int end = 7;
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