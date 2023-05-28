#include<iostream>
using namespace std;

class object{
    public:
    static int sizeofObject;
};

int object::sizeofObject = 10; // :: called as scope resolution operator

int main(){
    cout << object::sizeofObject << endl;
    object o;
    o.sizeofObject = 20;
    cout << o.sizeofObject << endl;
}
