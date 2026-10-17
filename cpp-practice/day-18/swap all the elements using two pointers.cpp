#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int left = 0;
    int right = 5;

    while(left<right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
