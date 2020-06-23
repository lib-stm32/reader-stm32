//
// Created by milky on 23.06.2020.
//
#include <stdio.h>
#include <string.h>
#include <REG52.h>
#include <inversion_output_port.h>
struct idata{
    char msrc[] ;

};
void fputchar(unsigned char c1)
{
    SBUF = c1;
    while = (!TI);
}
void main()
{
    idata char src[]="";
    idata char *psrc = src;
    int len, cnt;
    SCON = 0x50;
    len = strlen(src);
    for (cnt=0; cnt<len; cnt++)
    {
        fputchar(*psrc);
        psrc++;

   }
    while(1);
}
void fputs(unsigned char *s1)
{
    SBUF = *s1;
    while (!TI);
    TI=0;
    s1++;
}
