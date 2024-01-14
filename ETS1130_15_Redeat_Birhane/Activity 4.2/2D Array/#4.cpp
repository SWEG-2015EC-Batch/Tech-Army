#include<iostream>
using namespace std;

bool areArraysIdentical(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int size = 5; 
    int array1[size] = {1, 2, 3, 4, 5}; 
    int array2[size] = {1, 2, 3, 4, 5};

    if (areArraysIdentical(array1, array2, size)) {
        cout << "Arrays are identical." << endl;
    } else {
        cout << "Arrays are not identical." << endl;
    }

    return 0;
}
