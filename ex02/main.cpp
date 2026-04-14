
#include "Array.h"

int main()
{
    try{
        Array<int> a1;
        std::cout << "a1 size: "<< a1.size() << "\n";
        
    }
    catch(std::exception & e)
    {
        std::cout << "Caught exception :"<< e.what() << std::endl;
    }
    return 0;
}
