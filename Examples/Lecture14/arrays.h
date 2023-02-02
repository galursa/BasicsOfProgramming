#include <time.h>
/*
* generate random values
* print array
*/

void randValueToArray(int arr[], int arrSize, int startRange, int endRange)
{
    srand(time(NULL));
    for(int i=0; i<arrSize; i++)
    {
        arr[i] = rand()%(endRange - startRange + 1) +startRange;
    }

}

void printArray(int arr[], int arrSize)
{
    std::cout<<"Arrays elements: \n";
     for(int i=0; i<arrSize; i++)
     {
         std::cout<<arr[i]<<" ";
     }
     std::cout<<"\n";

}
