#include <iostream>
#include <string>

#include <cctype>
//using namespace std

bool check(std::string input,std::string output){
    bool hasUpperCase = false;
    for (char ch : input) {
        if (std::isupper(ch)) {
            ch = std::tolower(ch); // 
            hasUpperCase = true;
        }
    }

    // 
    if (input == output) {
        return !hasUpperCase; // same output and without upper case
    } else {
        return false; // fail
    }
}







void deltadebug(std::string input){
    int length= input.length();
    int location=length/2;
    std::string test_part;

    while(location>=1){
        for(int i=0; i<=location;i++){
            test_part=input.substr(0,location);
             check(input,processString(input));
            
            if( check(input,processString(input))==false){



            }



        }



    }

}

std::string processString(std::string input) {
    std::string output = "";
    for (char ch : input) {
        if (std::isupper(ch)) {
            output += std::tolower(ch);
        } else if(std::isdigit(ch)) {
            output += ch;
        } 
    }
    return output;
}



int main() {
    // Test the processString function with C++ code
    //2023
    return 0;
}
