#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {4, -2, 7, -5, 0, 9, -1, 6};
    int size = 8;
    int mid = size/2;

    for(int i = 0; i < size; i++){
        if(arr[i] < 0){
            arr[i] = 0;
        }
    }

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
