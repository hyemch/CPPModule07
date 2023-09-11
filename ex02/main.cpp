#include "Array.hpp"

void    leak(void)
{
    system("leaks ex02");
}
//
//#define MAX_VAL 750
//int main(int, char**)
//{
//    atexit(leak);
//    Array<int> numbers(MAX_VAL);
//    int* mirror = new int[MAX_VAL];
//    srand(time(NULL));
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        const int value = rand();
//        numbers[i] = value;
//        mirror[i] = value;
//    }
//    //SCOPE
//    {
//        Array<int> tmp = numbers;
//        Array<int> test(tmp);
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        if (mirror[i] != numbers[i])
//        {
//            std::cerr << "didn't save the same value!!" << std::endl;
//            return 1;
//        }
//    }
//    try
//    {
//        numbers[-2] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//    try
//    {
//        numbers[MAX_VAL] = 0;
//    }
//    catch(const std::exception& e)
//    {
//        std::cerr << e.what() << '\n';
//    }
//
//    for (int i = 0; i < MAX_VAL; i++)
//    {
//        numbers[i] = rand();
//    }
//    delete [] mirror;//
//    return 0;
//}

int main(void)
{
    atexit(leak);
    Array<char>  charArray;

    std::cout << "charArray size: " << charArray.size() << std::endl;
    try
    {
        for (int i = 0; i < 5; i++)
        {
            charArray[i] = 'h';
            std::cout << "charArray[" << i << "]: " << charArray[i] << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    charArray = Array<char>(10);
    try
    {
        for (int i = 0; i < 11; i++)
        {
            charArray[i] = 'H';
            std::cout << "charArray[" << i << "]: " << charArray[i] << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    Array<char>  lowerHArray(5);
    for (int i = 0; i < 5; i++)
    {
        lowerHArray[i] = 'h';
    }
    const Array<char> copyConstructor(lowerHArray);
    std::cout << "copy size: " << copyConstructor.size() << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "copy Array[" << i << "]: " << copyConstructor[i] << std::endl;
    }

	return 0;
}