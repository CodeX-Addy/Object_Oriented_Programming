#include <iostream>
using namespace std;

class A{
    public:
    void print(){
        cout << "A" << endl;
    }
};

class B : public A{
    public:
    void print(){
        cout << "B" << endl;
    }
};

int main() {
    B obj;
    obj.print();
    return 0;
}
