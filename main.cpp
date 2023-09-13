//
//  main.cpp
//  User Input and Output Example
//
//  Created by Nick Brett on 13/09/2023.
//

#include <iostream>

int main() {
    // My code to greet the user, to ask for their name and to store in in a variable
    // to then ask them their age and how they are feeling
    // the program will then print a message using this information
    
    std::string Name;
    int Age;
    std::string Feeling;
    
    std::cout << "Hello, what is your name? \n";
    std::cin >> Name;
    std::cout << "Hi, " << Name << " how old are you?\n";
    std::cin >> Age;
    std::cout << "Thank you " << Name << "\nHow are you feeling today? \n";
    std::cin >> Feeling;
    std::cout << "Well, " << Name << " You are " << Age << " years old and you are feeling " << Feeling << " today!\n\n";
    
    
    return 0;
}
