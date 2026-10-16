#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {7, 45, 12, 28, 45, 32, 5};
    int largest = arr[0];
    int secLargest;
    int i;

    for (i = 0; i < 7; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    bool secFound = false;
    for (i = 0; i < 7; i++)
    {
        if (arr[i] < largest)
        {
            if (secFound == false)
            {
                secLargest = arr[i];
                secFound = true;
            }
            else if (arr[i] > secLargest)
            {
                secLargest = arr[i];
            }
        }
    }
    if (secFound == false)
    {
        cout << "No distinct value.";
    }
    else
    {

        cout << "Second Largest = " << secLargest;
    }
    return 0;
}
