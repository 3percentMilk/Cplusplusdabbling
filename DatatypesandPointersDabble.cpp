// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    cout << "Hello world!" << endl;
    
   // int a;
   // int* a_loc = &a;
    
    
    //cout << "the location for int a is:" << a_loc;    
    
    int x = 42;  // create an `int` object called `x` with value 42
    int & y = x; // `y` is another name for the object `x` is a name for
    int z = x;
    
    cout << "x = " << x << endl << "y = " << y << endl << "z = " << z << endl << endl;
    x = 10;      // change the value of the `int` object through `x`
    cout << "x = " << x << endl << "y = " << y << endl << "z = " << z << endl << endl;
    y = 0;       // change the value of the `int` object through `y`
    cout << "x = " << x << endl << "y = " << y << endl << "z = " << z << endl << endl;
    
    int overflow = 40000;
    short container = overflow;
    
    int shortMax = 32767;
    short container2 = shortMax;
    
    int OneOverMax = 32768;
    short container3 = OneOverMax;
    
    cout << "This is what gets printed when short overflow happens:" << container<< endl << endl;
    cout << "This is what gets printed when the type transfer fits the new typing:" << container2 << endl << endl;
    cout << "This is a test to give insight on how C++ deals with integer overflow, testing 1 over max:" << container3 << endl << endl;
    cout << "The lesson with type transfer in C++ is don't fuck up, the compiler will run it and there is no predicted behaviour" << endl << endl << "Hope this helps in the future" << endl << endl << "Grace and Peace," << endl << "Meeplet";
    
    
    

    return 0;
}
