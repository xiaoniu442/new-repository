#pragma once

struct Box{
    char maker[40];
    float height;
    float width;
    float length;  
    float volume;
};

void showbox(const Box b);
void calcvolume(Box *pb);

