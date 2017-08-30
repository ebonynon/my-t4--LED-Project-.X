/* 
 * File:   my t4 c.c
 * Author: ebonynon
 *
 * Created on March 12, 2016, 5:30 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <pic.h>
#define _XTAL_FREQ 8000000

// PIC16F877 Configuration Bit Settings

// 'C' source line config statements

#include <htc.h>

__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & CP_OFF & BOREN_OFF & LVP_OFF & CPD_OFF & WRT_OFF);

/*  My try 1 ;
 *  This program similar to piumals's c code on ~ https://github.com/ebonynon/PIC-IC/blob/master/Project%201/LED%20project.c ~ ;
 *                         <<<<W.T.F.>>>>    
 * 
 */

void main(){
    
    TRISB = 0b00000000;
    TRISB = 0b00000000; 
    
    while (1){
        
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b10000000;
            __delay_ms(1000);
         PORTB = 0b01000000;
            __delay_ms(1000);
         PORTB = 0b00100000;
            __delay_ms(1000);
         PORTB = 0b00010000;
            __delay_ms(1000);
         PORTB = 0b00001000;
            __delay_ms(1000);
         PORTB = 0b00000100;
            __delay_ms(1000);
         PORTB = 0b00000010;
            __delay_ms(1000);
         PORTB = 0b00000001;
            __delay_ms(1000);
         PORTB = 0b00000010;
            __delay_ms(1000);
         PORTB = 0b00000100;
            __delay_ms(1000);
         PORTB = 0b00001000;
            __delay_ms(1000);
         PORTB = 0b00010000;
            __delay_ms(1000);
         PORTB = 0b00100000;
            __delay_ms(1000);
         PORTB = 0b01000000;
            __delay_ms(1000);
         PORTB = 0b10000000;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b10000000;
            __delay_ms(1000);
         PORTB = 0b11000000;
            __delay_ms(1000);
         PORTB = 0b11100000;
            __delay_ms(1000);
         PORTB = 0b11110000;
            __delay_ms(1000);
         PORTB = 0b11110000;
            __delay_ms(1000);
         PORTB = 0b11111100;
            __delay_ms(1000);
         PORTB = 0b11111110;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b10000000;
            __delay_ms(1000);
         PORTB = 0b11000000;
            __delay_ms(1000);
         PORTB = 0b11100000;
            __delay_ms(1000);
         PORTB = 0b11110000;
            __delay_ms(1000);
         PORTB = 0b11110000;
            __delay_ms(1000);
         PORTB = 0b11111100;
            __delay_ms(1000);
         PORTB = 0b11111110;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b01111111;
            __delay_ms(1000);
         PORTB = 0b00111111;
            __delay_ms(1000);
         PORTB = 0b00011111;
            __delay_ms(1000);
         PORTB = 0b00001111;
            __delay_ms(1000);
         PORTB = 0b00000111;
            __delay_ms(1000);
         PORTB = 0b00000011;
            __delay_ms(1000);
         PORTB = 0b00000001;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b10000001;
            __delay_ms(1000);
         PORTB = 0b11000011;
            __delay_ms(1000);
         PORTB = 0b11100111;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b11100111;
            __delay_ms(1000);
         PORTB = 0b11000011;
            __delay_ms(1000);
         PORTB = 0b10000001;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b10000001;
            __delay_ms(1000);
         PORTB = 0b11000011;
            __delay_ms(1000);
         PORTB = 0b11100111;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b01111110;
            __delay_ms(1000);
         PORTB = 0b00111100;
            __delay_ms(1000);
         PORTB = 0b00011000;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b00011000;
            __delay_ms(1000);
         PORTB = 0b00111100;
            __delay_ms(1000);
         PORTB = 0b01111110;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b11100111;
            __delay_ms(1000);
         PORTB = 0b11000011;
            __delay_ms(1000);
         PORTB = 0b10000001;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b00011000;
            __delay_ms(1000);
         PORTB = 0b00111100;
            __delay_ms(1000);
         PORTB = 0b01111110;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b11100111;
            __delay_ms(1000);
         PORTB = 0b11000011;
            __delay_ms(1000);
         PORTB = 0b10000001;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b01111111;
            __delay_ms(1000);
         PORTB = 0b10111111;
            __delay_ms(1000);
         PORTB = 0b11011111;
            __delay_ms(1000);
         PORTB = 0b11101111;
            __delay_ms(1000);
         PORTB = 0b11110111;
            __delay_ms(1000);
         PORTB = 0b11111011;
            __delay_ms(1000);
         PORTB = 0b11111101;
            __delay_ms(1000);
         PORTB = 0b11111110;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b01111111;
            __delay_ms(1000);
         PORTB = 0b10111111;
            __delay_ms(1000);
         PORTB = 0b11011111;
            __delay_ms(1000);
         PORTB = 0b11101111;
            __delay_ms(1000);
         PORTB = 0b11110111;
            __delay_ms(1000);
         PORTB = 0b11111011;
            __delay_ms(1000);
         PORTB = 0b11111101;
            __delay_ms(1000);
         PORTB = 0b11111110;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b01111110;
            __delay_ms(1000);
         PORTB = 0b00111100;
            __delay_ms(1000);
         PORTB = 0b00011000;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b00011000;
            __delay_ms(1000);
         PORTB = 0b00111100;
            __delay_ms(1000);
         PORTB = 0b01111110;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b01111110;
            __delay_ms(1000);
         PORTB = 0b00111100;
            __delay_ms(1000);
         PORTB = 0b00011000;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b00011000;
            __delay_ms(1000);
         PORTB = 0b00111100;
            __delay_ms(1000);
         PORTB = 0b01111110;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b01111110;
            __delay_ms(1000);
         PORTB = 0b10111101;
            __delay_ms(1000);
         PORTB = 0b11011011;
            __delay_ms(1000);
         PORTB = 0b11100111;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b10101010;
            __delay_ms(1000);
         PORTB = 0b01010101;
            __delay_ms(1000);
         PORTB = 0b10101010;
            __delay_ms(1000);
         PORTB = 0b01010101;
            __delay_ms(1000);
         PORTB = 0b10101010;
            __delay_ms(1000);
         PORTB = 0b01010101;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);
         PORTB = 0b11111111;
            __delay_ms(1000);
         PORTB = 0b00000000;
            __delay_ms(1000);                
        
    }
}

