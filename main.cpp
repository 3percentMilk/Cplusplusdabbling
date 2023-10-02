// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here

   int number = 0;
   int inputs;
   int sum = 0;
    
    cout << "Hello World" << endl;
    cout << "Enter how many inputs to be averaged: " ;
    
    cin >> inputs;
    while( inputs <= 0){
        cout << "Cannot process. Input must be a positive integer" 
        << endl;
        cout << "Enter how many inputs to average";
        cin >> inputs;
        
    }
    
    for (int i = 0; i < inputs; i++){
        cout << "enter number: ";
        cin >> number;
        sum = sum + number;
        cout << endl;
    }
    sum = sum/inputs;
    cout << "The truncated sum is:" << sum;
    
  


    return 0;
}
