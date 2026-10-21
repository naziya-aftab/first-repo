#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 6};
    int target = 2;

    int n = sizeof(arr) / sizeof(arr[0]);

    int st = 0;
    int end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;

        if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << st << endl;

    return 0;
}