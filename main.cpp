#include <iostream>

int main() {
    int amount;
    std::cin >> amount;
    int sum =0;
    for(int i = 0; i < amount; i++){
       int  a =  rand() % 10;
       std::cout <<a<< " ";
       sum += a;
    }
    std::cout << std::endl;
    std::cout << "The sum: ";
    std:: cout<< sum;
    return 0;
}
