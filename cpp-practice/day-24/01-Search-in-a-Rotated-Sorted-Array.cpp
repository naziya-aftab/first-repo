#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6, 7, 8, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 7;

    int st = 0;
    int end = n - 1;

    int found = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == target)
        {
            found = mid;
            break;
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
        }else{
            
            if (arr[mid] < target && target <= arr[end])
            {
                st = mid + 1;    
            }else
            {
                end = mid - 1;   
            }
        }
        
    }

    if(found != -1){
        cout << found << endl;
    }else{
        cout << -1;
    }

    return 0;
}
