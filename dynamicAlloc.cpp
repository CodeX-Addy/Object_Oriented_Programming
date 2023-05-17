// Dynamic allocation of classes
#include <iostream>
using namespace std;

class Addy{
    public://This is an access modifier
    int age;
    string interest;
};
int main() {

    Addy *a = new Addy;
    (*a).age = 20;
    cout << (*a).age << endl;
    
    Addy *b = new Addy;
    (*b).interest = "DarkAcademia";
    cout << (*b).interest << endl;
    
    
    cout << sizeof(Addy) << endl;
    
    

    return 0;
}
