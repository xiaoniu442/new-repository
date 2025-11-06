#include <iostream>
#include "./include/Box.h"

using namespace std;

int main(){
    cout << "Hello from Box main!" << endl;
    struct Box myBox = {"Acme Box Co.", 2.5, 3.0, 4.0, 0.0};
    calcvolume(&myBox);
    showbox(myBox);
    return 0;
}