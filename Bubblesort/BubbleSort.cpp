#include <iostream>
#include <vector>
#include <random>
#include <cstdlib>
#include <ctime>
#include <fstream>

//it is the bubble sort  
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
   std::ofstream outputFile("output.txt");
     std::srand(static_cast<unsigned>(std::time(nullptr)));

     int num_iterations;
 
    std::cout << "Input a int num ";
    std::cin >> num_iterations;
    std::cout <<  std::endl;

     outputFile << "Input a int num ";
    outputFile << num_iterations;
    outputFile << std::endl;

    for(int i = 0; i < num_iterations; i++){
    //a random int will be set as the length of the array 
    //int length =1+std::rand()%100;
    int length =3;
     int* arr = new int[length];
     int* outputarr = new int[length];
    int* expectedarr = new int[length];
    bool arraysEqual = true;
 

   for(int i=0; i<length; i++){
    arr[i]=1+rand()%100;
    outputarr[i]=arr[i];
    }
    
    std::cout << "This is the ";
     std::cout << i+1;
      std::cout<< " time test" <<std::endl;
       std::cout << std::endl;

        outputFile<< "This is the ";
     outputFile << i+1;
      outputFile<< " time test" <<std::endl;
       outputFile<<" "<< std::endl;
      
     std::cout << "The length of the array is ";
     std::cout << length <<std::endl;
    std::cout << std::endl;

     outputFile << "The length of the array is ";
     outputFile<< length <<std::endl;
     outputFile << std::endl;
    
    std::cout << "Unsorted Array: ";
     outputFile << "Unsorted Array: ";
     
    for (int i = 0; i < length; i++) {
        std::cout << arr[i] << " ";
        outputFile << arr[i] << " ";
    }
    std::cout << std::endl;
  std::cout<<" "<< std::endl;

   outputFile << std::endl;
   outputFile << std::endl;

    bubbleSort(outputarr, length);

    std::cout << "Sorted Array: ";
   outputFile << "Sorted Array: ";
    for (int i = 0; i < length; i++) {
        std::cout << outputarr[i] << " ";
         outputFile << outputarr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;

   outputFile << std::endl;
   outputFile<< std::endl;


     outputFile << "The expected array element: ";
    for (int i = 0; i < length; i++) {
        std::cout << "Input the expected array element: ";
       std::cin >> expectedarr[i];

   outputFile << expectedarr[i] << " ";
        }
  outputFile<< std::endl;
 outputFile<< std::endl;


    //  for (int i = 0; i < length; i++) {
    //     if(outputarr[i]!= expectedarr[i]){
    //          std::cout << "The test is failed" << std::endl;
    //          std::cout<<" "<< std::endl;
    //          break;
    //     }else{
    //            std::cout << "The test is passed" << std::endl;
    //          std::cout<<" "<< std::endl;
    //     }
      
    // }
   int count=0;
    while (arraysEqual && count < length){
    if (outputarr[count] != expectedarr[count]){
        arraysEqual = false;
    }
        count++;
    
    
  }
   
    if(arraysEqual){
         std::cout << "The test is passed" << std::endl;
              std::cout << std::endl;

              outputFile << "The test is passed" << std::endl;
              outputFile << std::endl;
    }else{
        std::cout << "The test is failed" << std::endl;
             std::cout << std::endl;

              outputFile << "The test is failed" << std::endl;
             outputFile << std::endl;
    }
   
  }

  outputFile.close();
     return 0;
}
