#include <iostream>
using namespace std;

class Abstraction{
  private:
    int a,b;
  public:
    void set(int x, int y){
      a = x;
      b = y;
    }
    void display(){
      cout << a << endl;
      cout << b << endl;
    }
};

int main(){
  Abstraction obj;
  obj.set(10,20);
  obj.display();
  return 0;
}
