#include <iostream>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>
//using namespace std

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
        
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    //a random int will be set as the length of the array 
   srand((int)time(0));
    int length =1+rand()%100;
     int* arr = new int[length];

   for(int i=0; i<length; i++){
    arr[i]=1+rand()%100;
    }
    
    

    std::cout << "Unsorted Array: ";
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bubbleSort(arr, length);

    std::cout << "Sorted Array: ";
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
