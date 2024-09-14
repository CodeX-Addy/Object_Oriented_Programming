#include<iostream>
using namespace std;

class A{
    private:
    int x;

    public:
    A(int _val):x(_val){}

    int getX() const{return x;}
    void setX(int _val){x = _val;}

    //Better approach
    //void print() const{
      //  cout << x << endl;
    //}

    friend class B;
    friend void print(const A&);
};

class B{
    public:
    void print(const A&a){
        cout << a.x << endl;
        //better approach
        //a.print();
    }
};

void print(const A&a){
    cout << a.x << endl;
}

int main(){
    A a(10);
    B b;
    print(a);
    b.print(a);
}
