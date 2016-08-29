#ifndef BOX_H_
#define BOX_H_

#include <iostream>
#include <string>
using namespace std;


class Side {

private:
    int number;
    string color;

public:
    Side();
    Side(int, string);
    
    int getNumber();
    string getColor();
    
    void printColor();
    void randomize();
};





#endif