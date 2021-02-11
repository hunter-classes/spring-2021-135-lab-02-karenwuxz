#include <iostream>
/*
Ask user to enter a number between 0 - 100
    - if no in range, ask to enter a new number
    - if valid, return the number squared
*/

int main(){
    int input = -1;
    while(input <= 0 || input >= 100){
        std::cout << "Enter a integer: ";
        std::cin >> input;
    }
    std::cout << "Number sqaured is: " << input * input <<std::endl;
    return 0;
}