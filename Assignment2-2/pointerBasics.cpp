#include <iostream>
using namespace std;

int main()
{
    //A
    int myInt = 15;
    int *myPointer = &myInt;
    //B
    cout << "memory location of myInt: " << &myInt << endl;
    cout << "value of myPointer: " << myPointer << endl;
    cout << "value of myInt: " << myInt << endl;
    cout << "value pointed to by myPointer: " << *myPointer << endl;
    //C
    cout << "\nChange the value of myInt to 10:\n";
    myInt = 10;
    cout << "memory location of myInt: " << &myInt << endl;
    cout << "value of myPointer: " << myPointer << endl;    
    cout << "value of myInt: " << myInt << endl;
    cout << "value pointed to by myPointer: " << *myPointer << endl;
    
    return 0;
}