#include <iostream>

using namespace std;

double harmonic(double a, double b){
    return 2.0 * a * b / (a + b);
}

int main(){
    double a, b;
    cout << "Enter two numbers(0 to quit): " << endl;
    while(true){
        cout << "<";
        if(!(cin >> a >> b)) break;
        if(a == 0 || b == 0) break;
        if(a + b == 0){
            cout << "Invalid input: a = " << a << ", b = " << b << endl;
            break;
        }
        cout << "answer: " << harmonic(a, b) << endl;
    }
    return 0;
}