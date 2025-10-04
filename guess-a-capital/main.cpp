#include <iostream>
#include <conio.h>
using namespace std;
void whatCapital(string capital) {
  string capit;
  cin >> capit;
  if (capit == capital) {
  cout << "You're right!" << endl;
  }
  else {
  cout << "Wrong answer!" << endl;
  }
}
int main(int argc, char *argv[]) {
  while(true) {
    char answer;
    srand((unsigned) time(0));
    int a;
    string diff, capit; 
    cout << "Choose difficult(Easy, Medium, Hard): ";
    cin >> diff;
    if (diff == "Easy") {
      string arr[9] = {"Russia", "China", "USA", "UK", "France", "Japan", "Germany", " Italy", "Spain"};
      a = rand() % 9;
      cout << arr[a] << endl;
      switch(a) {
        case 0:
          whatCapital("Moscow");
          break;
        case 1:
          whatCapital("Beijing");
          break;
        case 2:
          whatCapital("Washington");
          break;
        case 3:
          whatCapital("London");
          break;
        case 4:
          whatCapital("Paris");
          break;
        case 5:
          whatCapital("Tokyo");
          break;
        case 6:
          whatCapital("Berlin");
          break;
        case 7:
          whatCapital("Rome");
          break;
        case 8:
          whatCapital("Madrid");
          break;
      }
    }
    else if (diff == "Medium") {
      string arr[8] = {"Sweden", "Finland", "Norway", "Iceland", "South Korea", "Canada", "Greece", "Denmark"};
      a = rand() % 8;
      cout << arr[a] << endl;
      switch(a) {
        case 0:
          whatCapital("Stockholm");
          break;
        case 1:
          whatCapital("Helsinki");
          break;
        case 2:
          whatCapital("Oslo");
          break;
        case 3:
          whatCapital("Reykjavik");
          break;
        case 4:
          whatCapital("Seoul");
          break;
        case 5:
          whatCapital("Ottawa");
          break;
        case 6:
          whatCapital("Athens");
          break;
        case 7:
          whatCapital("Copenhagen");
          break;
      }
    }
    else if (diff == "Hard") {
      string arr[7] = {"Croatia", "Portugal", "Serbia", "New Zealand", "Belarus", "Ukraine", "Belgium"};
      a = rand() % 7;
      cout << arr[a] << endl;
      switch(a) {
        case 0:
          whatCapital("Zagreb");
          break;
        case 1:
          whatCapital("Lisbon");
          break;
        case 2:
          whatCapital("Belgrade");
          break;
        case 3:
          whatCapital("Wellington");
          break;
        case 4:
          whatCapital("Minsk");
          break;
        case 5:
          whatCapital("Kyiv");
          break;
        case 6:
          whatCapital("Brussels");
          break;
      }
    }
    cout << "Wanna play again?(y or n) ";
    cin >> answer;
    if(answer != 'y' && answer != 'Y') {
      break;
    }
  }
  return 0;
}