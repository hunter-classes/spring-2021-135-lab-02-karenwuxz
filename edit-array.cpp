#include <iostream>
void readingArr(int arr[], int arrLength){
    for(int i = 0; i < arrLength; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
int main(){
    int myData[10];
    for(int i =0; i < 10; i++){
        myData[i] = 1;
    }
    readingArr(myData, 10);
    int index = 0;
    int value = 0; 
    std::cout << "Input Index: ";
    std::cin >> index;
    std::cout << "Input Value: ";
    std::cin >> value;
    while(index >= 0 && index < 10){
        myData[index] = value;
        readingArr(myData, 10);
        std::cout << "Input Index: ";
        std::cin >> index;
        std::cout << "Input Value: ";
        std::cin >> value;
    }
    std::cout << "Index out of range. Exit." << std::endl;
    return 0;
}