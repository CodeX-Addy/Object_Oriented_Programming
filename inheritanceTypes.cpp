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

// Multilevel inheritance
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

class Student: public Class{
    
};

int main() {
    Student S;
    S.loc();
    return 0;
}

// Multiple inheritance
#include<iostream>
using namespace std;

class integer{
    public:
    int value;
    void intclass(){
        cout << "An integer class" << endl;
    }
};

class floatn{
    public:
    float val;
    void floatclass(){
        cout << "A floating class" << endl;
    }
};

class Hybrid : public integer, public floatn{
    
};
int main(){
    Hybrid h1;
    h1.intclass();
    h1.floatclass();
 }
