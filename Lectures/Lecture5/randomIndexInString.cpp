#include <iostream>
#include <ctime>
using namespace std;

int main()
{  //we want read string variable from user and we want to choose random letter from the string
    srand(time(NULL));
    string word;
    cout<<"Write a word, please\n";
    cin>>word;
    cout<<"Word: "<<word<<"\n";
    int s = word.size();
    int index = rand()%s;
    cout<<"Letter: "<<word[index]<<"\n";

    return 0;
}
