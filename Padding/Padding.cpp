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

int main()
{
    cout << sizeof(Empty) << endl; // 1 byte
    cout << sizeof(Padding1) << endl; // 8 bytes
    cout << sizeof(Padding2) << endl; // 12 bytes
    return 0;
}
