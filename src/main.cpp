/*30-03-17*****************************************************************************************************
***************************************************************************************************************
**                                                                                                           **
**                                                 main.cpp                                                  **
**                                                                                                           **
***************************************************************************************************************
**************************************************************************************************************/

#include "MFrec.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

    MFrec com;

    //  (command, exploit addr (block with known key), attack addr (key to recover), opt key for exploit bloc)
    byte key = (atoi(argv[2]) & 0xFF);
    byte block = (atoi(argv[1]) & 0xFF);
    printf("B: %d, K: %d\n", block,key);
    printf("B: %x, K: %x\n", block,key);
    com.automatedCrackKey( AUTHENT_A, block, key );

    com.stop();

    return 0;

}
