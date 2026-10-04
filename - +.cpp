#include <iostream>
using namespace std;

int main() {
    int number;

    cout<<"Enter the number:";
    cin>> number;
    if(number > 0){
        cout<<number<<" is positive"<< endl;
    }
    else if(number == 0){
        cout<<number<<"is exactly zero"<< endl;
    }
    else if(number < 0){
        cout<<number<<"is negative"<< endl;
    }

    return 0;
}
