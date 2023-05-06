#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void enter_rate(int& rate) {
	cin >> rate;
}

bool check2value(int a, int b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
    int s, k;
    cin >> k;
    vector<int> v(k);
    for (int i = 0; i < v.size(); i++){
      cin >> v[i];
    }
    cin >> s;
    vector<int> v2(s);
    for (int i = 0; i < v2.size(); i++){
      cin >> v2[i];
    }
    if (equal(v2.begin(), v2.end(), v.begin(), check2value)) {
        cout << "CLEAR!"; 
    }
    else {
        cout << "LEAK FOUND!";
    }
    return 0;
}
