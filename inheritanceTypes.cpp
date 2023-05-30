// Single Inheritance
#include <iostream>
using namespace std;
class School {
    public:
    string locat;
    
    void loc(){
        cout << "Opp.to metro station" << endl;
    }
};

class Class : public School{
 };

int main() {
    Class c;
    c.loc();
    return 0;
}
