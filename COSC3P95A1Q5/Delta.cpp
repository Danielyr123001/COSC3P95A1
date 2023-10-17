#include <iostream>
#include <string>

#include <cctype>

//here is the check function to check the expected output with the output 
//if both of them are same and the code do not have bugs. Otherwise, it has.
bool check(std::string input,std::string output){
   std::string expected_output = "";
    for (char ch : input) {
        if (std::isupper(ch)) {
            expected_output += std::tolower(ch);
            
        } else if(std::isdigit(ch)) {
            expected_output += ch;
            
        } else{
             expected_output += std::toupper(ch);
            
        }
    }

     
    if (input == output) {
        return true; //pass
    } else {
        return false; // fail
    }
}



//the test is the program to run iput and get results
std::string test(std::string input) {
    std::string output = "";
    for (char ch : input) {
        if (std::isupper(ch)) {
            output += std::tolower(ch);
            
        } else if(std::isdigit(ch)) {
            output += ch;
            
        } else{
             output += std::toupper(ch);
            
        }
    }
    
    
    return output;
   
}

//here is the deltabug to find bugs
int deltadebug(std::string input){
    int length= input.length();
    int location;
    std::string test_part;
    std::string output;

    location=length/2;
    output=test(input);
     std::cout << output <<std::endl;
   //if location=0, then quit the iteration
      if (location <= 0) {
        return location;  
    }

     while (location >= 1) {
        test_part = input.substr(0, location);
        bool isBug = check(test_part, test(test_part));
        if (isBug) {
            //to the smaller location of bugs        
           location=location/2;
        } else {
            // to check reamaining part
            std::string remaining_part = input.substr(location,length);
            bool isRemainingBug = check(remaining_part, test(remaining_part));

            if (isRemainingBug) {
    
               deltadebug(remaining_part);
       } else {
          location = 0; // there is no bug
          
          }
        }
    }

    std::cout << "Final location: " << location << std::endl;


 if(location!=0){
    std::cout <<"The test find bugs and locations are";
   std::cout << location <<std::endl;
 }else{

    std::cout << "The test does not find bugs" <<std::endl;
 }
return location;
}


int main() {
  
     std::string input1 = "abcdefG1";
     std::string input2 = "CCDDEExy";
     std::string input3 = "1234567b";
     std::string input4 = "8665";
    test(input1);
    deltadebug(input1);
    test(input2);
    deltadebug(input2);
    test(input3);
    deltadebug(input3);
    test(input4);
    deltadebug(input4);
    return 0;
}
