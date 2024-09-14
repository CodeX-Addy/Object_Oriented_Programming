// Access modifiers
#include <iostream>
using namespace std;
// Without declaring public modifier it'll take private modifier by default!!
class Intro{ 
   public: // It is accessible into the class as well as objects
   char name;
   int age;
};

int main() {
    Intro n;
    n.name = 'a';
    n.age = 20;
    
    cout << n.name << endl;
    cout << n.age << endl;
    

    return 0;
}
