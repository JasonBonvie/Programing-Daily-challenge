#include <iostream>

using namespace std;


// This is a portion of code that forces and error to be triggered
void mightGoWrong(){

    bool error = false;
    bool error1 = true;
    if (error){
        throw "Something went wrong.";
    }
    if (error1){
        throw string("crud something else went wrong!");
    }
}

int main() {
// when the try fails the catch will display the thrown error in the
// mightGoWrong method
    try {
        mightGoWrong();
    }
    catch(int e){
        cout << "Error code: " << e << endl;
    }
    catch(char const * e){
        cout << "Error code: " << e << endl;
    }
    catch(string e){
        cout << "Error code: " << e << endl;
    }

    cout << "Still Running" << endl;
    return 0;

}