#include <iostream>
using namespace std;

int main(){
    int arr[6] = {3, 7, 2, 9, 4, 5};

    for(int i = 0; i < 6; i++){
        arr[i] = arr[i] + 10;
    }
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
