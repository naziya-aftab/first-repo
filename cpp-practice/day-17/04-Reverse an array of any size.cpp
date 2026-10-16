#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {3, 8, 1, 9, 4, 6, 2};
    int size = 7;
    int mid = size/2;
    for (int i = 0; i < mid; i++)
    {
        int j = size - 1 - i;
        
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
          
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
