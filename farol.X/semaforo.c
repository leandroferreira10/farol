

#include <xc.h>
#include "config.h"
#include "delay.h"

#define VERDE          TRISDbits.TRISD5
#define AMARELO        TRISDbits.TRISD6
#define VERMELHO       TRISDbits.TRISD7
#define VERDEPED       TRISDbits.TRISD2
#define VERMELHOPED    TRISDbits.TRISD1
#define BOTAO          TRISDbits.TRISD1

void semaforo_init ( void )
{
    TRISDbits.TRISD7 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD1 = 1;
    PORTDbits.RD7 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD3 = 0;
    PORTDbits.RD2 = 0;
}

void verde ( int x )
{
    VERDE = x;
}

void amarelo ( int x )
{
    AMARELO = x;
}

void vermelho ( int x )
{
    VERMELHO = x;
}

void verdePed ( int x )
{
    VERDEPED = x;
}

void vermelhoPed ( int x )
{
    VERMELHOPED = x;
}

int botao ( void )
{
    return( BOTAO );
}

