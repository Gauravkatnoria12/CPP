#include <iostream>
using namespace std;

int main(){
  int arr[5] = {1, 2, 5, 3, 4};
  int target = 4;

  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (arr[i] + arr[j] == target) {
        cout << arr[i] << " " << arr[j] << endl;
      }
    }
  }

  return 0;
}