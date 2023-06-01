#include <iostream>

/*structure for musicalInstruments
* string name
  string producer
  float price
  float weight
*/
using namespace std;

struct musicalInstrument{
    string name;
    string producer;
    float price;
    float weight;
};

int main()
{
    musicalInstrument piano =
    {
        "Grand piano",
        "ABC",
        10000.99,
        90.99
    };

    cout<<"Name: "<<piano.name<<"\n";
    cout<<"Producer: "<<piano.producer<<"\n";
    cout<<"Price: "<<piano.price<<" zl \n";
    cout<<"Weight: "<<piano.weight<<" kg \n";
    return 0;
}
