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
