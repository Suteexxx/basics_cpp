#include <iostream>
using namespace std;

int main() {
    int arr[6] = {44, 55, 66, 7, 77, -22};
    int size = 6;
    int target = 77;

    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            cout << "Element found at index: " << i << endl;
            return 0;
        }
    }

    cout << "Element not found" << endl;

    return 0;
}