#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int n, k;
  cin >> n;
  vector<int> arr (n);
  for (auto it = arr.begin(); it != arr.end(); it++){
    cin >> *it;
  }
  cin >> k;
  int count = 0;
  for (auto it = arr.begin(); it != arr.end(); it++){
      count++;
      if (count != k){
        cout << *it << " ";
      }
      if (count == k) count = 0;
  }
  return 0;
}
