#include <iostream>
using namespace std;
class MyVector{
  public:
    int *data, count = 0, n;
    MyVector(int n = 0): n(n){
      data = new int[n];
      for (int i = 0; i < n; i++)
        data[i] = 0;
      count = n;
    };
    ~MyVector() { // Деструктор
      delete[] data;
    }
    MyVector& operator=(const MyVector& a){
      if (&a == this) return *this;
      delete[] data;
      count = a.count;
      data = new int[count];
      for (int i = 0; i < count; i++){
        data[i] = a.data[i];
      }
      return *this; 
    }
    void read(){
      for (int i = 0; i < count; i++){
        int a;
        cin >> a;
        data[i] = a;
      }
    }
    void print(){
      for (int i = 0; i < count; i++){
        if (data[i] != 99999){
          cout << data[i] << " ";
        } else {
          
        }
      }
    }
};
int main() {
  int n;
  cin >> n;
  MyVector vec(n), vec_copy;
  vec.read();
  vec = vec;
  vec_copy = vec;
  vec.print();
  vec_copy.print();
  return 0;
}
