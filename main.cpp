#include <iostream>
#include <string>
#include <vector>

//std::string numeralChain;
const std::string ROMAN_ONE = "I";
const std::string ROMAN_FIVE = "V";
const std::string ROMAN_TEN = "X";
const std::string ROMAN_FIFTY = "L";
const std::string ROMAN_HUNDRED = "C";
const std::string ROMAN_FIVE_HUNDRED = "D";
const std::string ROMAN_THOUSAND = "M";

using namespace std;

//Convert first digit

string getSingleDigit(int userNum) {

  string numeralChain = "";

  if (userNum < 4) {
    for (int i = 0; i < userNum; i++) {
      numeralChain.append(ROMAN_ONE);
    }
  }
  else if (userNum == 5) {
    numeralChain.append(ROMAN_FIVE);
  }
  else if (userNum == 4) {
    numeralChain.append(ROMAN_ONE);
    numeralChain.append(ROMAN_FIVE);
  }
  else if (userNum == 9) {
    numeralChain.append(ROMAN_ONE);
    numeralChain.append(ROMAN_TEN);
  }
  else {
    numeralChain.append(ROMAN_FIVE);
    for (int i = 5; i < userNum; i++) {
      numeralChain.append(ROMAN_ONE);
    }
  }

  return numeralChain;
}

// Convert Second Digit

string getSecondDigit(int userNum, int oldNum) {

  string numeralChain = "";

  if (userNum % 10 != 0) {
    numeralChain.append(getSingleDigit(userNum % 10));
  }

  if (userNum == 10) {
    numeralChain.insert(0, ROMAN_TEN);
  }
  else if (userNum < 60 & userNum > 49) {
    numeralChain.insert(0, ROMAN_FIFTY);
  }
  else if (userNum < 50 & userNum > 39) {
    numeralChain.insert(0, ROMAN_FIFTY);
    numeralChain.insert(0, ROMAN_TEN);
  }
  else if (userNum < 100 & userNum > 89) {
    numeralChain.insert(0, ROMAN_HUNDRED);
    numeralChain.insert(0, ROMAN_TEN);
  }
  else if (userNum < 40) {
    if (userNum < 40 & userNum > 29) {
      numeralChain.insert(0, ROMAN_TEN);
      numeralChain.insert(0, ROMAN_TEN);
      numeralChain.insert(0, ROMAN_TEN);
    }
    else if (userNum < 30 & userNum > 19) {
      numeralChain.insert(0, ROMAN_TEN);
      numeralChain.insert(0, ROMAN_TEN);
    }
    else if (userNum < 20 & userNum > 9) {
      numeralChain.insert(0, ROMAN_TEN);
    }
  }
  else {
    if (userNum < 70 & userNum > 59) {
      numeralChain.insert(0, ROMAN_TEN);
      numeralChain.insert(0, ROMAN_FIFTY);
    }
    else if (userNum < 80 & userNum > 69) {
      numeralChain.insert(0, ROMAN_TEN);
      numeralChain.insert(0, ROMAN_TEN);
      numeralChain.insert(0, ROMAN_FIFTY);
    }
    else if (userNum < 90 & userNum > 79) {
      numeralChain.insert(0, ROMAN_TEN);
      numeralChain.insert(0, ROMAN_TEN);
      numeralChain.insert(0, ROMAN_TEN);
      numeralChain.insert(0, ROMAN_FIFTY);
    }
  }

  return numeralChain;
  
}

int main() {

  char userChar;
  int userNum = 0;
  string userNumeral;
  const string ROMAN_ONE = "I";
  const string ROMAN_FIVE = "V";
  const string ROMAN_TEN = "X";
  const string ROMAN_FIFTY = "L";
  const string ROMAN_HUNDRED = "C";
  const string ROMAN_FIVE_HUNDRED = "D";
  const string ROMAN_THOUSAND = "M";
  vector<string> numberChain;
  string numeralChain;
  // vector<int> realNumbers;

// Program Name

  cout << "|     ROMAN NUMERAL CONVERTER     |" << endl << endl << "*      Created by Eli Malone      *" << endl << endl << endl;

// Set up menu

  while (userChar != 'q') {
    cout << "Would you like to convert a number?" << endl << "Type 'n' for number, or 'q' to quit" << endl << endl;
    cin >> userChar;
    cout << endl;

// Response validation
    
    if (userChar == 'n') {
      cout << "You selected: Number. Please enter a number between 1 and 1000:" << endl;
      cin >> userNum;
      cout << endl;

// Number logic

      if (userNum < 1 || userNum > 1000) {
        cout << "Invalid entry. Please try again." << endl;
      }
      else if (userNum % 1000 == userNum) {
        if (userNum % 100 == userNum) {
          if (userNum % 10 == userNum) {
            if (userNum < 4) {
              for (int i = 0; i < userNum; i++) {
                numeralChain.append(ROMAN_ONE);
              }
            }
            else if (userNum == 5) {
              numeralChain.append(ROMAN_FIVE);
            }
            else if (userNum == 4) {
              numeralChain.append(ROMAN_ONE);
              numeralChain.append(ROMAN_FIVE);
            }
            else if (userNum == 9) {
              numeralChain.append(ROMAN_ONE);
              numeralChain.append(ROMAN_TEN);
            }
            else {
              cout << ROMAN_FIVE;
              for (int i = 5; i < userNum; i++) {
                numeralChain.append(ROMAN_ONE);
              }
            }
          }
          else  {
            if (userNum == 10) {
              numeralChain.append(ROMAN_TEN);
            }
            else if (userNum < 60 & userNum > 49) {
              numeralChain.append(ROMAN_FIFTY);
            }
            else if (userNum < 50 & userNum > 39) {
              numeralChain.append(ROMAN_TEN);
              numeralChain.append(ROMAN_FIFTY);
            }
            else if (userNum < 100 & userNum > 89) {
              numeralChain.append(ROMAN_TEN);
              numeralChain.append(ROMAN_HUNDRED);
            }
            else if (userNum < 40) {
              if (userNum < 40 & userNum > 29) {
                numeralChain.append(ROMAN_TEN);
                numeralChain.append(ROMAN_TEN);
                numeralChain.append(ROMAN_TEN);
              }
              else if (userNum < 30 & userNum > 19) {
                numeralChain.append(ROMAN_TEN);
                numeralChain.append(ROMAN_TEN);
              }
              else if (userNum < 20 & userNum > 9) {
                numeralChain.append(ROMAN_TEN);
              }
            }
            else {
              numeralChain.append(ROMAN_FIFTY);
              if (userNum < 70 & userNum > 59) {
                numeralChain.append(ROMAN_TEN);
              }
              else if (userNum < 80 & userNum > 69) {
                numeralChain.append(ROMAN_TEN);
                numeralChain.append(ROMAN_TEN);
              }
              else if (userNum < 90 & userNum > 79) {
                numeralChain.append(ROMAN_TEN);
                numeralChain.append(ROMAN_TEN);
                numeralChain.append(ROMAN_TEN);
              }
            }
            if (userNum % 10 != 0) {
              string resetChain = "";
              numeralChain.append(getSingleDigit(userNum % 10));
            }
          }
      }
        else {
          if (userNum < 200 & userNum > 99) {
            numeralChain.append(ROMAN_HUNDRED);
          }
          else if (userNum < 300 & userNum > 199) {
            numeralChain.append(ROMAN_HUNDRED);
            numeralChain.append(ROMAN_HUNDRED);
          }
          else if (userNum < 400 & userNum > 299) {
            numeralChain.append(ROMAN_HUNDRED);
            numeralChain.append(ROMAN_HUNDRED);
            numeralChain.append(ROMAN_HUNDRED);
          }
          else if (userNum < 500 & userNum > 399) {
            numeralChain.append(ROMAN_HUNDRED);
            numeralChain.append(ROMAN_FIVE_HUNDRED);
          }
          else if (userNum < 600 & userNum > 499) {
            numeralChain.append(ROMAN_FIVE_HUNDRED);
          }
          else if (userNum < 700 & userNum > 599) {
            numeralChain.append(ROMAN_FIVE_HUNDRED);
            numeralChain.append(ROMAN_HUNDRED);
          }
          else if (userNum < 800 & userNum > 699) {
            numeralChain.append(ROMAN_FIVE_HUNDRED);
            numeralChain.append(ROMAN_HUNDRED);
            numeralChain.append(ROMAN_HUNDRED);
          }
          else if (userNum < 900 & userNum > 799) {
            numeralChain.append(ROMAN_FIVE_HUNDRED);
            numeralChain.append(ROMAN_HUNDRED);
            numeralChain.append(ROMAN_HUNDRED);
            numeralChain.append(ROMAN_HUNDRED);
          }
          else if (userNum < 1000 & userNum > 899) {
            numeralChain.append(ROMAN_HUNDRED);
            numeralChain.append(ROMAN_THOUSAND);
          } 
          if (userNum % 100 != 0) {
            numeralChain.append(getSecondDigit(userNum % 100, userNum));
          }
        }
      }
      else if (userNum == 1000) {
        numeralChain.append(ROMAN_THOUSAND);
      }
      cout << numeralChain << endl << endl;
      numeralChain = "";

    }

// Response validation

    else {
      cout << "Invalid entry. Please try again." << endl << endl;
    }



// I didn't finish this part in time :(
  
  //   else if (userChar == 'r') {
  //     cout << "You selected: Roman Numeral. Please enter a Roman Numeral to convert:" << endl;
  //     cin >> userNumeral;
  //     numberChain.push_back(userNumeral);
  //     while (cin.get() != '\n') {
  //       cin >> userNumeral;
  //       numberChain.push_back(userNumeral);
  //     }

  //     for (int i = 0; i < numberChain.size(); i++) {
  //       if (numberChain.at(i) == "I") {
  //         realNumbers.push_back(1);
  //       }
  //       else if (numberChain.at(i) == "V") {
  //         realNumbers.push_back(1);
  //       }
  //       else if (numberChain.at(i) == "X") {
  //         realNumbers.push_back(10);
  //       }
  //       else if (numberChain.at(i) == "L") {
  //         realNumbers.push_back(50);
  //       }
  //       else if (numberChain.at(i) == "C" ) {
  //         realNumbers.push_back(100);
  //       }
  //       else if (numberChain.at(i) == "D") {
  //         realNumbers.push_back(500);
  //       }
  //       else if (numberChain.at(i) == "M") {
  //         realNumbers.push_back(1000);
  //       }
  //     }
  //   }
   }

  return 0;

}