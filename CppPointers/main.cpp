#include <iostream>
using namespace std;
// The value at the address not just the value mapped to a new variable.
void manipulateVal(double *value){
    cout << "2. The value of int in manipulate: "<< *value << endl;

    *value = 10;
    cout << "3. The value of int in manipulate: "<< *value << endl;

}


int main() {

    int value = 8;
    // The asterisk is the pointer and the & is the reference to the address

    int* pVal = &value;


    cout << "Hello, World! " << pVal << endl;
    // This * says to point to the information at the memory address
    cout << "Hello, World! " << *pVal << endl;


    cout << "============================" << endl;

    double dValue = 123.4;


    cout << "1. dValue: " << dValue << endl;
    manipulateVal(&dValue);

    cout << "4. dValue: " << dValue << endl;


    // Here we are casting the type double to a similar type of type int.
    double val = (int)7.1;
    cout << val << endl;

    return 0;
}