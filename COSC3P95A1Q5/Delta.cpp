#include <iostream>
#include <string>

#include <cctype>


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
    
    //std::cout << output <<std::endl;
    return output;
   
}


int deltadebug(std::string input){
    int length= input.length();
    int location;
    std::string test_part;
    std::string output;

    location=length/2;
    output=test(input);
     std::cout << output <<std::endl;

    while(location>=1){
      test_part=input.substr(0,location);
             check(test_part,test(input));
            
            if( check(input,test(input))==false){
                location=location/2;

                 }else{

                test_part = input.substr(location,length);
                location = (length-location) / 2;
            }



        }

  std::cout << location <<std::endl;


 if(location!=0){
    std::cout <<"The test find bugs and locations are";
   std::cout << location <<std::endl;
 }else{

    std::cout << "The test does not find bugs" <<std::endl;
 }
return location;
}


int main() {
  
     std::string input = "a1b2";
    test(input);
    deltadebug(input);
    return 0;
}
