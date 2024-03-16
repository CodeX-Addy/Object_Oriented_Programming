#include<iostream>
using namespace std;

class Bird{
    public:
    virtual void fly()
    {
        printf("Bird is flying..");
    }
};

class Sparrow : public Bird{
    public:
    void fly()
    {
        cout << "Sparrow is flying..";
    }
};


int main(){
    Bird*b = new Sparrow;
    b->fly();
}
