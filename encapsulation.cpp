#include<iostream>
using namespace std;

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
    cout << "Encapsulation completed!";
}
