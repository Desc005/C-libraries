#ifndef MAIN_CPP_TEXT_COLOR_H
#define MAIN_CPP_TEXT_COLOR_H

#include <windows.h>

/**
 * Funzione per colorare il testo della console
 *
 * LEGENDA COLORI
 * NERO = 0
 * BLU = 1
 * VERDE = 2
 * CIANO = 3
 * ROSSO = 4
 * MAGENTA = 5
 * MARRONE = 6
 * GRIGIO ACCESO = 7
 * GIRGIO SPENTO = 8
 * BLU ACCESO = 9
 * VERDE ACCESO = 10
 * CIANO ACCESO = 11
 * ROSSO ACCESO = 12
 * MAGENTA ACCESO = 13
 * GIALLO = 14
 * BIANCO = 15
 *
 * @param ForgC
 */
void color(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
}

#endif //MAIN_CPP_TEXT_COLOR_H
