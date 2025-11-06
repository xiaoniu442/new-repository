#include <iostream>
#include "../include/Box.h"

using namespace std;

void showbox(const Box b){
    cout << "Maker: " << b.maker << endl;
    cout << "Height: " << b.height << endl;
    cout << "Width: " << b.width << endl;
    cout << "Length: " << b.length << endl;
    cout << "Volume: " << b.volume << endl;
}

void calcvolume(Box *pb){
    pb->volume = pb->height * pb->width * pb->length;
}