#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isModern (string &g) {
  if (g == "Sci") return 1;
  else {
    return 0;
  }
}
int main() {
	unsigned int database_size = 0;
	cin >> database_size;
	vector<string> books_year(database_size);
	for (unsigned int i = 0; i < books_year.size(); i++){
		cin >> books_year[i];
	}
	if (all_of(books_year.begin(), books_year.end(), isModern)) {
		cout << "CORRECT JOURNAL" << endl;
	}
	else {
		cout << "WRONG JOURNAL" << endl;
	}
	return 0;
}
