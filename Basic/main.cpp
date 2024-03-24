#include <iostream>

using namespace std;

// what is this comment
int main(int argc, char *argv[]) {
  // boolean
  bool myBool = true;
  
  // integers and modifiers
  int myInt = 0;
  signed int mySignedInt = 0;
  unsigned int myUnsignedInt = 0;
  short int myShortInt = 0;
  long int myLongInt = 0;
  long long int myLongLongInt = 0;
  unsigned long long int myUnsignedLongLongInt = 0;

  __int8 myInt8 = 0;
  __int16 myInt16 = 0;
  __int32 myInt32 = 0;
  __int64 myInt64 = 0;

  float myFloat = 5.99F;
  double myDouble = 9.98;
  long double myLDouble = 0.00;

  char myChar = 'A';
  wchar_t myWchart = 'A';
  char16_t myChar16t = 'A';
  char32_t myChar32t = 'A';

  string myString = "C++";

  for (int i = 1; i < 16; i++) {
    cout << "Hello World! " + myString + "\r\n";
  }
}