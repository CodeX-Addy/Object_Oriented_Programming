#include <iostream>
using namespace std;

class Human{
    public:
    int age;
    int weight;
    
    void print(){
        cout << "Parent class called!" << endl;
    }
    
    void setage(int a){
        this->age = a;
    }
    void setweight(int w){
        this->weight = w;
    }
};

class Male : public Human{
    public:
    int height;
};

int main() {
    Male h;
    // cout << h.age << endl;
    // cout << h.weight << endl;
    // cout << h.height << endl;
    
    h.setage(20);
    h.setweight(60);
    cout << h.age << endl;
    cout << h.weight << endl;

    return 0;
}

//Protected access modifier
#include <iostream>
using namespace std;

class Object{
    public:
    char prop;
    int func;
};

class obj : protected Object{//It allows to access the attributes only in parent and child class
    public:
    int getfunc(){
        return this->func;
    }
    
    void setprop(char p){
        this->prop = p;
    }
    
    char getprop(){
        return this->prop;
    }
};

int main() {
    obj o;
    cout << o.getfunc() << endl;
    o.setprop('A');
    cout << o.getprop() << endl;

    return 0;
}

#include <iostream>
using namespace std;

class Human {
    public:
    int age;
    private:
    int height;
};

class Male : private Human{
    public:
    int weight;
    
    //Setter
    void setweight(int w){
        this->weight = w;
    }
    int getweight(){
        return this->weight;
    }
    
    void setage(int a){
        this->age = a;
    }
    int getage(){
        return this->age;
    }
};

int main() {
    Male m1;
    m1.setweight(50);
    cout << m1.getweight() << endl;
    m1.setage(20);
    cout << m1.getage() << endl;

    return 0;
}
//Output: 50 20

