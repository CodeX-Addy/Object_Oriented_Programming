#include <iostream>
using namespace std;

class Static{
    public:
        static int x,y;
        
        void print() const{
            cout << x << " " << y << endl;
        }
};

int Static::x;
int Static::y;

int main() {
    
    Static o1;
    o1.x = 1;
    o1.y = 2;
    o1.print();
    
    Static o2;
    o2.x = 10;
    o2.y = 20;
    o2.print(); 
    o1.print(); //It will also print 10 and 20

    return 0;
}
