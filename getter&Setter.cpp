#include <iostream>
using namespace std;
class Aditya{
    public:
    string hobby;
    private:
    int age;
    public:
    int getAge(){//getter
        return age;
    }
    
};

int main() {
    Aditya quality;
    quality.hobby = "DarkAcademia";
    cout << quality.hobby << endl;
    cout << quality.getAge() << endl; //It'll not throw any error even if age is under the private access modifier

    return 0;
}
