#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int n, k, g;
  cin >> n;
  vector<int> arr (n);
  for (auto it = arr.begin(); it != arr.end(); it++){
    cin >> *it;
  }
  cin >> k;
  cin >> g;
  for (auto it = arr.begin(); it != arr.end(); it++){
      if (*it == k){
        *it = g;
      }
  }
  for (auto it = arr.begin(); it != arr.end(); it++){
    cout << *it << " ";
  }
  return 0;
}
