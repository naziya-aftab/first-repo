#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 2, 4, 4, 4, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 4;

    int first = -1;
    int last = -1;

    int count = 0;

    int st = 0;
    int end = n - 1;
    while(st <= end)
    {
        int mid = (st + end) / 2;
        if(arr[mid] == target){
            first = mid;
            end = mid - 1;
        }else if(arr[mid] < target){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    st = 0;
    end = n - 1;

    while(st <= end)
    {
        int mid = (st + end) / 2;
        if(arr[mid] == target){
            last = mid;
            st = mid + 1;
        }else if(arr[mid] < target){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }

    if(first != -1){
        count = last - first + 1;
    }

    cout << count << endl;

    return 0;
}