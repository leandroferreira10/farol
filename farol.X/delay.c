

#include <xc.h>
#include "config.h"

void delay ( int t)
{
    while ( t )
    {
        if ( desligar ( ) == 1)
        {
            break;
        }
        __delay_ms( 1 );
        --t;
    }
}