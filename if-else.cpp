#include <iostream>

using namespace std;

int main (){
  
  char day[10] =  "Tuesday";

  if (day[0] == 'M'){
    cout << "It's Monday!" << endl;
  }
  else if (day[0] == 'T'){
    if (day[1] == 'u'){
      cout << "It's Tuesday!" << endl;
    }
    else {
      cout << "It's Thursday!" << endl;
    }
  }
  else if (day[0] == 'W'){
    cout << "It's Wednesday!" << endl;
  }
  else if (day[0] == 'F'){
    cout << "It's Friday!" << endl;
  }
  else {
    cout << "It's the weekend!" << endl;
  }


  cout << day[2] << endl;

  return 0;
}