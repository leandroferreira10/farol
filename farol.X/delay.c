

#include <xc.h>
#include "config.h"
#include "semaforo.h"

void delay ( int t)
{
    while ( t )
    {
        if ( botao ( ) == 1)
        {
            break;
        }
        __delay_ms( 1 );
        --t;
    }
}