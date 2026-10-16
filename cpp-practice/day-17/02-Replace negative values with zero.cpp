#include <iostream>
using namespace std;

int main(){
    int arr[8] = {5, -3, 12, -8, 0, 7, -1, 4};

    for(int i = 0; i < 8; i++){
        if(arr[i] < 0){
            arr[i] = 0;
        }
    }
    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
