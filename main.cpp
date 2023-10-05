#include <iostream>

#include "header/globalVariables.hpp"
#include "header/functions.hpp"

using std::cout;
using std::string; 

int main(){ 
    //! DEBUG
    cout << "Hello World \n\n" << iGlobalInt << std::endl;
    //!


    //? Initialisation
    if (initializeAPPM()){
        cout << "Initialized\n";
    } else {
        cout << "Something went wrong!\n";
    }

    //? E

    //? V

    //? A


    //? Close
    closeAPPM();
    return 1;
}