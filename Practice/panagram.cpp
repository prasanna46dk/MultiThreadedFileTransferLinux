#include <iostream>
#include <string>
using namespace std;

#define ALPHABATES 26
#define YES 1
#define NO 0

typedef struct inputStr {
  string str;
  unsigned long int allowedChanges;
}inputStr;

typedef struct cmdInput {
  unsigned short int testCases;
  inputStr *structStr;
}cmdInput;

typedef enum cmdOutput {
  yes,
  no
}cmdOutput;

cmdInput acceptInput()
{
  cmdInput input;
  cin >> input.testCases;

  input.structStr = new inputStr[testCases];
  for (unsigned int i = 0; i < testCases; i++) {
    cin >> input.structStr[i].str;
    cin >> input.structStr[i].allowedChanges;
  }

  return input;
}

bool checkPangram(string str)
{
    vector<bool> mark(26, false);
    unsigned int index;
    unsigned int i;
    for (i = 0; i < str.length(); i++) {
        char alpha = str[i];
        if (alpha >= 'a' && alpha <= 'z') {
            index = alpha - 'a';
        } else if (alpha >= 'A' && alpha <= 'Z' ) {
            index = alpha - 'A';
        }
        mark[index] = true;
    }
    for (i = 0; i < str.length() && mark[i] != false; i++);
    if (i >= str.length())
        return true;
    return false;
}

int main()
{
  cmdInput input = acceptInput();
  vector<bool> mark(input.testCases, false);
  unsigned int i;
  for (i = 0; i < input.testCases; i++) {
    
  }
}
