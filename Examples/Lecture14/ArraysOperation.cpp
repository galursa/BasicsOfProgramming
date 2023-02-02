#include <iostream>
#include "arrays.h"

using namespace std;

int main()
{
    cout<<"Making operation on arrays\n";
    int arrSize = 10;
    int arr[arrSize];
    randValueToArray(arr, arrSize, 3,5);
    printArray(arr, arrSize);
    return 0;
}
