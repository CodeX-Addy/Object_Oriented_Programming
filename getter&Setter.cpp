#include <iostream>
using namespace std;

class Aditya{
    public:
    string hobby;
    private:
    int age;
    
    public:
    int getAge(){
        return age;
    }
    
};

int main() {
    Aditya quality;
    quality.hobby = "DarkAcademia";
    cout << quality.hobby << endl;
    cout << quality.getAge() << endl;

    return 0;
}
