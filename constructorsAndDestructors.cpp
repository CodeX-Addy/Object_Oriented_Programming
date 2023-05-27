// Constructors
#include <iostream>
using namespace std;

class Addy{
    public:
    int age;
    // Constructors
    Addy(){
        cout << "My name is Aditya!";
    }
  };

int main() {
    Addy a;
    return 0;
}

//Parameterised constructor and the use of "this" keyword
#include <iostream>
using namespace std;

class Addy{
    
    public:
    int age;
    // Parameterised constructor
    Addy(int age){
        cout << "Hey" << endl;
        this -> age = age; // this keyword is a pointer which stores the address of an object
        cout << age;
    }
};

int main() {
    Addy a(20);
    cout << a << endl;
    Addy *b = new Addy(20); // Dynamic way of allocation
    cout << b << endl;
    return 0;
}
