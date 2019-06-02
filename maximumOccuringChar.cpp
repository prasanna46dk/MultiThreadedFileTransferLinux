#include<iostream>
#include<vector>
#include<string>

#define CHAR_LENGTH 26
using namespace std;

string maxOccuringChar (string str) 
{
  std::vector<int> letterCount(CHAR_LENGTH, 0);
  string maxChar;
  int max = 0;
  for (std::string::iterator itr = str.begin();
       itr != str.end();
       itr++) {
    char alpha = *itr;
    if (alpha >= 'A' && alpha <= 'Z')
      letterCount[alpha - 'A'] += 1;
    else if (alpha >= 'a' && alpha <= 'z')
      letterCount [alpha - 'a'] += 1;
  }
  for (std::vector<int>::iterator itr = letterCount.begin();
       itr != letterCount.end();
       itr++) {
    if (max <= (*itr))
      {
	maxChar = 'A' + distance(letterCount.begin(), itr);
	max = *itr;
      }
  }
  return maxChar;
}

int main(int argc, char *argv[])
{
  if (argc < 2)
    return -1;
  cout << "Maximum occuring character is '" << maxOccuringChar(argv[1]) << "'" << endl;
  return 0;
}
