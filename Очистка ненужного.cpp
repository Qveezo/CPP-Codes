#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	unsigned int database_size = 0;
	cin >> database_size;
	vector<int> books_year(database_size);
	for (unsigned int i = 0; i < books_year.size(); i++){
		cin >> books_year[i];
	}
    int r;
    cin >> r;
    auto it = remove(books_year.begin(), books_year.end(), r);
    books_year.erase(it, books_year.end());
    cout << books_year.size() << endl;
    for (unsigned int i = 0; i < books_year.size(); i++){
		cout << books_year[i] << " ";
	}
	return 0;
}
