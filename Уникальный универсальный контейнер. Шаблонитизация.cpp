#include <iostream>
#include <vector>
#include <string>   
using namespace std;

 
template <class T>
class UniqArray {
  public:
    vector<T> data;
    void add_elem(T new_elem){
      data.push_back(new_elem);
    }
    void show() {
      for (int i = 0; i < data.size(); i++)
        cout << data[i] << " ";
    }
};
int main() {
    string type = "";
    cin >> type;
    if (type == "INT") {
        UniqArray<int> test_subject;
        string command;
        while (command != "EXIT") {
            cin >> command;
            if (command == "ADD") {
                int tmp_val = 0;
                cin >> tmp_val;
                test_subject.add_elem(tmp_val);
            }
            else if (command == "SHOW") {
                test_subject.show();
                cout << endl;
            }
        }
    }
    else if (type == "DOUBLE") {
        UniqArray<double> test_subject;
        string command;
        while (command != "EXIT") {
            cin >> command;
            if (command == "ADD") {
                double tmp_val = 0;
                cin >> tmp_val;
                test_subject.add_elem(tmp_val);
            }
            else if (command == "SHOW") {
                test_subject.show();
                cout << endl;
            }
        }
    }
    else if (type == "STRING") {
        UniqArray<string> test_subject;
        string command;
        while (command != "EXIT") {
            cin >> command;
            if (command == "ADD") {
                string tmp_val = "";
                cin >> tmp_val;
                test_subject.add_elem(tmp_val);
            }
            else if (command == "SHOW") {
                test_subject.show();
                cout << endl;
            }
        }
    }
    return 0;
}
