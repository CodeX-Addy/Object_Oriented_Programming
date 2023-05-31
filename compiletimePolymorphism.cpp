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
