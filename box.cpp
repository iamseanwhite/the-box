#include "box.h"

Side::Side(){
    number = 0;
    color = "none";
}

Side::Side(int n, string c) {
    number = n;
    color = c;
}

int Side::getNumber(){
    return number;
}

string Side::getColor(){
    return color;
}

void Side::randomize() {
    
    int colorIndex;
    string setOfColors[] = {"red", "orange", "yellow", "green", "blue", "purple"};
    
    colorIndex = rand() % 6;
    this->color = setOfColors[colorIndex];

    }
    
void Side::printColor() {
    cout << "Side " << this->number << " - " << this->color << "\n";
}
  


