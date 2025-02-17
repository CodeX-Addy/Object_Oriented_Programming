#include<iostream>
using namespace std;

// The data and methods are encapsulated inside a class
class Object{
    private:
        int size;
        string property;
    
    public:
        int getsize(){
            return this->size;
        }
};

int main(){
    Object o1;
    cout << "Encapsulation completed!";
}
