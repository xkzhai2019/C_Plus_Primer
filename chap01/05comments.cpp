#include <iostream>
/*
 * main function:
 * read two numbers and cal their sum
 * */

int main(){
    
    // remind users input two numbers
    std::cout << "input two numbers:" << std::endl;
    int v1 = 0,v2 = 0; // used to save our input numbers
    
    std::cin >> v1 >> v2; // read input numbers
    std::cout << "the sum of " << v1 << " and " << v2 << " is " <<v1+v2<<std::endl;
    return 0;
}
