#include <iostream>

int main(){
    int age;
    std::string name;

    //Asking for user's name
    std::cout << "Enter your name: ";
    std::cin >> name; //Taking input

    //Askint for user's age
    std::cout << "Enter your age: ";
    std::cin >> age; //Taking input

    //Displaying the input values
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}
