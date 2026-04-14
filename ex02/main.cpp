
// #include "Array.h"



// int main() 
// {
//     std::cout << "=== Test 1: Allocation & Size ===" << std::endl;
//     Array<int> emptyArr;
//     Array<int> numArr(5);
    
//     std::cout << "Size of emptyArr: " << emptyArr.size() << "(0)" << std::endl;
//     std::cout << "Size of numArr: " << numArr.size() << " (5)" << std::endl;


//     std::cout << "\n=== Test 2: Writing & Reading ===" << std::endl;
//     for (unsigned int i = 0; i < numArr.size(); i++) {
//         numArr[i] = i * 10;
//         std::cout << "numArr[" << i << "] = " << numArr[i] << std::endl;
//     }



//     std::cout << "\n=== Test 3: Out of Bounds Exception ===" << std::endl;
//     try {
//         std::cout << "Attempting to write to numArr[10]..." << std::endl;
//         numArr[10] = 999; 
//         std::cout << "FAIL: The program did not stop you!" << std::endl;
//     } 
//     catch (const std::exception& e) {
//         std::cout << "SUCCESS: Exception caught -> " << e.what() << std::endl;
//     }




//     std::cout << "\n=== Test 4: Deep Copy Verification ===" << std::endl;
//     Array<int> copiedArr = numArr; 
    
//     std::cout << "Modifying copiedArr[0] to 42..." << std::endl;
//     copiedArr[0] = 42;
    
//     std::cout << "Original numArr[0]: " << numArr[0] << " (Expected: 0)" << std::endl;
//     std::cout << "Copied copiedArr[0]: " << copiedArr[0] << " (Expected: 42)" << std::endl;

//     return 0;

// }

                                                                                         
#include <iostream>
#include "Array.h"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE                                                                                                                      
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//                                                                                                          
    return 0;
}
