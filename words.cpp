#include<iostream>

#include<map>

#include<fstream>

#include<vector>

using namespace std;

class wordManipulate {
  private:
    string dictionary;
  string wordToSearch;
  vector < string > wordlist;
  public:

    wordManipulate() //Default Constructor creates a vector 
  { //which holds the words from dictionary
    string line;
    ifstream myfile("dit.txt");

    if (myfile.is_open()) {
      while (myfile.good()) {
        getline(myfile, line);

        wordlist.push_back(line);
      }
      myfile.close();
    }
  }
  void setDictionary(string d) {
    dictionary = d;
  }
  void setwordToSearch(string w) {
    wordToSearch = w;
  }
  bool magic() {
    map < char, int > availableLetters;
    for (int iterator = 0; iterator < dictionary.size(); iterator++) {
      availableLetters[dictionary[iterator]]++;
    }

    for (int iterator = 0; iterator < wordToSearch.size(); iterator++) {
      if (availableLetters[wordToSearch[iterator]] > 0) {
        availableLetters[wordToSearch[iterator]]--;
      } else {

        if (availableLetters['?'] > 0) {
          availableLetters['?']--;
          continue;
        }
        return false;
      }

    }

    return true;
  }

  string longest(string letters) {

    map < char, int > availableLetters;

    for (int i = 0; i < letters.size(); i++) {
      availableLetters[letters[i]]++;
    }
    int maxLength = 0;
    string ans;
    for (int i = 0; i < wordlist.size(); i++) {
      bool properWord = true;
      map < char, int > currentWordLetters;
      string s = wordlist[i];
      int helper = 0;
      if (availableLetters['?'] > 0) {
        helper = availableLetters['?'];
      }
      for (int j = 0; j < s.size(); j++) {
        currentWordLetters[s[j]]++;

        if (currentWordLetters[s[j]] > availableLetters[s[j]]) {
          if (helper > 0) {
            helper -= 1;
            continue;
          }
          properWord = false;
          break;
        }
      }

      if (properWord) {
        if (s.size() > maxLength) {
          maxLength = s.size();
          ans = s;
        }
      }

    }
    return ans;

  }
};

int main() {
  wordManipulate w;
  w.setDictionary("ahwcsvvat");
  w.setwordToSearch("watch");
  cout << w.longest("uruqrnytrois");

}
