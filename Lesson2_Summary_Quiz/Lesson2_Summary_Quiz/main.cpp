#include "io.h"
#include <iostream>

// Key insight
// We have to include the io.h header file here
// Before we didn't have to include that
// because the forward declarations were directly in this file
// and letting us know the existence of them being defined in another file

int main(int argc, const char * argv[]) {
    int x{ readNumber() };
    int y{ readNumber() };
    
    writeAnswer(x + y);

    return 0;
}
