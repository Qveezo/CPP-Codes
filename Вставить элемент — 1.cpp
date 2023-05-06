#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int n, x, k;
  cin >> n;
  vector<int> arr (n);
  for (auto it = arr.begin(); it != arr.end(); it++){
    cin >> *it;
  }
  cin >> k >> x;
  arr.insert(arr.begin() + k, x);
  for (auto it = arr.begin(); it != arr.end(); it++){
    cout << *it << " ";
  }
  return 0;
}
