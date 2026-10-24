#include <iostream>
using namespace std;

int findPeakElement(int arr[], int n)
{
    int st = 0;
    int end = n - 1;

    while (st < end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] < arr[mid + 1])
        {
            st = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return st;
} 

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = findPeakElement(arr, n);

    cout << "Peak index: " << peak << endl;
    cout << "Peak value: " << arr[peak] << endl;

    return 0;
}