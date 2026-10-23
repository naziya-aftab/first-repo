#include <iostream>
using namespace std;

bool search(int arr[], int n, int target)
{
    int st = 0;
    int end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target)
        {
            return true;
        }
        if (arr[st] == arr[mid] && arr[mid] == arr[end])
        {
            st++;
            end--;
            continue;
        }
        if (arr[st] <= arr[mid])
        {

            if (arr[st] <= target && target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {

            if (arr[mid] < target && target <= arr[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {2, 5, 6, 0, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    bool result = search(arr, n, target);

    if (result)
    {
        cout << "Target found";
    }
    else
    {
        cout << "Target not found";
    }

    return 0;
}