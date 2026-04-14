
#include "Array.h"



int main() 
{
    std::cout << "=== Test 1: Allocation & Size ===" << std::endl;
    Array<int> emptyArr;
    Array<int> numArr(5);
    
    std::cout << "Size of emptyArr: " << emptyArr.size() << " (Expected: 0)" << std::endl;
    std::cout << "Size of numArr: " << numArr.size() << " (Expected: 5)" << std::endl;

    std::cout << "\n=== Test 2: Writing & Reading ===" << std::endl;
    // Fill the array with values
    for (unsigned int i = 0; i < numArr.size(); i++) {
        numArr[i] = i * 10;
        std::cout << "numArr[" << i << "] = " << numArr[i] << std::endl;
    }

    std::cout << "\n=== Test 3: Out of Bounds Exception ===" << std::endl;
    try {
        std::cout << "Attempting to write to numArr[10]..." << std::endl;
        numArr[10] = 999; 
        std::cout << "FAIL: The program did not stop you!" << std::endl;
    } 
    catch (const std::exception& e) {
        std::cout << "SUCCESS: Exception caught -> " << e.what() << std::endl;
    }

    std::cout << "\n=== Test 4: Deep Copy Verification ===" << std::endl;
    Array<int> copiedArr = numArr; // Calls the Copy Constructor
    
    std::cout << "Modifying copiedArr[0] to 42..." << std::endl;
    copiedArr[0] = 42;
    
    std::cout << "Original numArr[0]: " << numArr[0] << " (Expected: 0)" << std::endl;
    std::cout << "Copied copiedArr[0]: " << copiedArr[0] << " (Expected: 42)" << std::endl;

    return 0;
}