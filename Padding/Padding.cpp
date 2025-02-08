#include<iostream>
using namespace std;

// Padding is a technique used to fill the memory with some data to make it more secure.

class Empty{
    
};

class Padding1{
    int a;
    int b;
};

// Actual padding concept --> Padding of 3 bytes is added so the size becomes 12 bytes instead of actual expected 9 bytes
class Padding2{ 
    int a;
    char b;
    int c;
};

// Actual padding concept --> Padding of 7 bytes is added so the size becomes 24 bytes instead of actual expected 17 bytes because the largest data type is double which is 8 bytes
class Padding3{
    double a;
    double b;
    bool c;
};

// The actual size of class is 8 + 8 + 1 + 1 = 17 bytes, so compiler will now adds 7 bytes of padding to make it 24 bytes which is nearly multiple of largest data type which is 8(double)
class Padding4{
    double a;
    double b;
    char c;
    bool d;
};

int main()
{
    cout << sizeof(Empty) << endl; // 1 byte
    cout << sizeof(Padding1) << endl; // 8 bytes
    cout << sizeof(Padding2) << endl; // 12 bytes
    cout << sizeof(Padding3) << endl; // 24 bytes
    cout << sizeof(Padding4) << endl; // 24 bytes
    return 0;
}
