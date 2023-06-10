#include <iostream>
#include "IntArray.h"
#include <exception>
#ifndef INTARRAY_H
#define INTARRAY_H
#include <assert.h>

using namespace std;

int main()
{ 
    try
    {
        IntArray array(10);
        for (int i{ 0 }; i < 10; ++i)
            array[i] = i + 1;

         array.resize(8);
         array.insertBefore(20, 5);
         array.InsertAtBeginning(40);
         array.insertAtEnd(30);
         array.remove(3);
        for (int i{ 0 }; i <array.getLength(); ++i)
        std::cout << array[i] << ' ';
        std::cout << '\n';
        IntArray _array(array);
        for (int i{ 0 }; i <_array.getLength(); ++i)
        std::cout <<_array[i] << ' ';
        std::cout << '\n';
    }
    catch (bad_length & e)
    {
    std::cout << e.what();
    }
    catch (bad_range & e)
    {
    std::cout << e.what();
    }
    return 0;
}
#endif