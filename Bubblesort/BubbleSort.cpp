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
    //here is the random test case generator
   std::ofstream outputFile("output.txt");
     std::srand(static_cast<unsigned>(std::time(nullptr)));

     int num_test;
     //to enter how many times tests people want to run
    std::cout << "Enter an int to indicate how many tests to run ";
    std::cin >> num_test;
    std::cout <<  std::endl;

     outputFile << "Enter an int to indicate how many tests to run ";
    outputFile << num_test;
    outputFile << std::endl;

    for(int i = 0; i < num_test; i++){
    //a random int will be set as the length of the array 
    //int length =1+std::rand()%100;
    int length =3;//to make it easy to use the program I used length=3 to get the result as a example
     int* arr = new int[length];//the initial array
     int* outputarr = new int[length];//the output array after the bubble sort
    int* expectedarr = new int[length];//the expected array and need people to input every expected element of the array
    bool arraysEqual = true;//to check 2 arrays equal or not
 
//to set the initial array and the output as well
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
      
      //show the random length of arrays
     std::cout << "The length of the array is ";
     std::cout << length <<std::endl;
    std::cout << std::endl;

     outputFile << "The length of the array is ";
     outputFile<< length <<std::endl;
     outputFile << std::endl;
    
    //show the initial array
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

     //run the bubble sort and get the output array
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

    //people may need to input the expected array
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

    //to check the ourputarray equals to the expected array or not
   int count=0;
    while (arraysEqual && count < length){
    if (outputarr[count] != expectedarr[count]){
        arraysEqual = false;
    }
        count++;
    
    
  }
   //if the ourputarray equals to the expected array, then test is passed. Otherwise,the test is failed
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
