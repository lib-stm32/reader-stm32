//
// Created by milky on 23.06.2020.
//
#include <stdio.h>
#include <string.h>
#include <REG52.h>
#include <inversion_output_port.h>
void fputchar(unsigned char c1)
{
    SBUF = c1;
    while = (!TI);
}
