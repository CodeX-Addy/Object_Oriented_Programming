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

//Copy Constructors
#include <iostream>
using namespace std;

class Object{
    int property;
    string Identity;
    
    //Parameterised constructor
    public:
    Object(int property, string Identity){
        this->property = property;
        this->Identity = Identity;
    }
    
    void print(){
        cout << this->property << endl;
        cout << this->Identity << endl;
    }
};
int main() {
    Object O(4, "ID");
    O.print();
    //Copy constructor
    Object P(O);
    P.print();

    return 0;
}

//Destructors
#include <iostream>
using namespace std;
class object{
    public:
    object(){
        cout << "Constructor called!" << endl;
    }
    
    ~object(){
        cout << "Destructor called!" << endl;
    }
};

int main() {
    object o;
    object *p = new object;
    delete p;//For manually calling of destructor in case of dynamic allocation

    return 0;
}
