#include <iostream>

using namespace std;

int main()
{
    //string word and we take every second letter and make a new word.
    string word, newWord;
    cout<<"Write word please \n";
    cin>>word;
    newWord = "";
    int size = word.size();
    for(int i=0; i< size ; i+=2)
    {
        newWord+=word[i];
    }
    cout<<"\n"<<newWord<<"\n";

    return 0;
}
