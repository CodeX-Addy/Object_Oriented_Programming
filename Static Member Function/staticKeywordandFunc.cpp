#include<iostream>
using namespace std;

class object{
    public:
    static int sizeofObject;
    
    static int func(){//Static function declaration
        return sizeofObject;
    }
};

int object::sizeofObject = 10; //:: called as scope resolution operator

int main(){
    cout << object::sizeofObject << endl;
    object o;
    o.sizeofObject = 20;
    cout << o.sizeofObject << endl;
    cout << object::func() << endl;//Static function called
}
