#include <iostream>
#include <ctime>
#include <cstdlib>
//Print random values and we want to stop if we have value == 3
//We don't want to print 3 value
using namespace std;
int main(int argc, char** argv) {
	int random;
	srand(time(NULL));
	for( ;random != 3; )
	{
		random = rand()%10;
	    if (random == 3)
	    	break;
		cout<<random<<" ";
    }
    cout<<"\n";
    random = rand()%10;
    while(random != 3)
    {   
		cout<<random<<" ";
		random = rand()%10;
    }
    cout<<"\n";
    do{
    	if (random != 3)
    		cout<<random<<" ";
		random = rand()%10;	
    }while(random != 3);
	cout<<"\n";
	return 0;
}
