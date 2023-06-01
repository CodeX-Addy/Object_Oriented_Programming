//Function overload
#include<iostream>
using namespace std;

class Add {
    public:
    int add(int a, int b){
        return a + b;
    }
    
    int add(int a, int b, int c){
        return a + b + c;
    }
};

int main(){
    Add sum;
    cout << sum.add(10,20) << endl;
    cout << sum.add(10,20,30) << endl;
}

//Operator overload
#include<iostream>
using namespace std;
class A {
    public:
    int a;
    public:
    void operator+ (A &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout << val2 - val1;
    }
};
int main(){
    A obj1, obj2;
    obj1.a = 8;
    obj2.a = 10;
    obj1 + obj2;
}
//Output:- 2
