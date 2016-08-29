#include "box.h"
#include "box.cpp"
//#include <windows.h>


int checkIfAllColorsAreTheSame(Side sideArray[], int length){
    
    for (int i = length; i > 0; i--) {
        
        if (sideArray[i].getColor() != sideArray[i - 1].getColor()) {
            return 0;
        }
        
    }
    return 1;
}


int main() {
    srand (time(NULL));
    int userInput;
    int allColorsAreNotTheSame = 1;
    
    Side sideOne(1, "none"), sideTwo(2, "none"), sideThree(3, "none"), sideFour(4, "none"), sideFive(5, "none"), sideSix(6, "none");
    
    Side sideArray[] = {sideOne, sideTwo, sideThree, sideFour, sideFive, sideSix};
    
 
    for (int i = 5; i >= 0; i--) {
        sideArray[i].randomize();
        sideArray[i].printColor();
    }
    
    while (allColorsAreNotTheSame) {
        
        cin >> userInput;
        int otherSide = 7 - userInput;
        
        sideArray[otherSide - 1].randomize();
        sideArray[userInput - 1].randomize();
        
        for (int i = 5; i >= 0; i--) {
            sideArray[i].printColor();
        }    
        
        checkIfAllColorsAreTheSame(sideArray, 6);
     
    }
   
}

