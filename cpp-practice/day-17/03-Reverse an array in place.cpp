#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int mid = 6/2;
    for (int i = 0; i < mid; i++)
    {
        int j = 5 - i;
        
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
          
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
