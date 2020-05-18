/*
**      Sample main program
**      Remember to add -D<processor_model> to compiler arguments
*/

#include "easypdk/pdk.h"

unsigned char _sdcc_external_startup(void)
{
    // example, edit to suit
    EASY_PDK_INIT_SYSCLOCK_8MHZ();            //use 8MHz sysclock
    EASY_PDK_CALIBRATE_IHRC(8000000,4000);    //tune SYSCLK to 8MHz @ 4.000V
    return 0;                                 //perform normal initialization
}

void main(void)
{
    // Insert code

    while(1)
        ;
}
