#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 2, 4, 5, 7};
    int n = 7;
    int target = 2;

    int first = -1;
    int last = -1;

    int st = 0;
    int end = n - 1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
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

    st = 0;
    end = n -1;

    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            st = mid + 1;
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

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;

    return 0;
}