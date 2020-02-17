#include<iostream>
#include<map>
#include<fstream>
#include<vector>
using namespace std;

class wordManipulate{
private:
    string dictionary;
    string wordToSearch;
public:
    void setDictionary(string d)
    {
        dictionary=d;
    }
    void setwordToSearch(string w)
    {
        wordToSearch=w;
    }
    bool magic()
    {
        map<char,int> availableLetters;
        for(int iterator=0;iterator<dictionary.size();iterator++)
        {
            availableLetters[dictionary[iterator]]++;
        }

        for(int iterator=0;iterator<wordToSearch.size();iterator++)
        {
            if(availableLetters[wordToSearch[iterator]]>0)
            {
                availableLetters[wordToSearch[iterator]]--;
            }
            else{

                if(availableLetters['?']>0)
                {
                    availableLetters['?']--;
                    continue;
                }
                return false;
            }
        
        }

        return true;
    } 
};

int main()
{
    wordManipulate w;
    w.setDictionary("ahwcsvvat");
    w.setwordToSearch("watch");

}