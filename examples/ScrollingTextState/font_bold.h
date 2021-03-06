#include <avr/pgmspace.h>

const unsigned char font[] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 5, // 
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0xC0, 0xC0, 3, //!
0xD8, 0xD8, 0xD8, 0xD8, 0x00, 0x00, 0x00, 0x00, 6, //"
0x66, 0xFF, 0xFF, 0x66, 0x66, 0xFF, 0xFF, 0x66, 9, //#
0x7F, 0xFF, 0xD8, 0xFE, 0x7F, 0x1B, 0xFF, 0xFE, 9, //$
0xE3, 0xE7, 0xEE, 0x1C, 0x38, 0x77, 0xE7, 0xC7, 9, //%
0x70, 0xF8, 0xD8, 0x73, 0xFF, 0xDE, 0xFF, 0x7B, 9, //&
0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 3, //'
0x70, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xF0, 0x70, 5, //(
0xE0, 0xF0, 0x30, 0x30, 0x30, 0x30, 0xF0, 0xE0, 5, //)
0xDB, 0xFF, 0x7E, 0x3C, 0x3C, 0x7E, 0xFF, 0xDB, 9, //*
0x18, 0x18, 0x18, 0xFF, 0xFF, 0x18, 0x18, 0x18, 9, //+
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 3, //,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 9, //-
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 3, //.
0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70, 0xE0, 0xC0, 9, ///
0x7E, 0xFF, 0xC3, 0xDB, 0xDB, 0xC3, 0xFF, 0x7E, 9, //0
0xE0, 0xF0, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 5, //1
0xFE, 0xFF, 0x03, 0x7F, 0xFE, 0xC0, 0xFF, 0xFF, 9, //2
0xFE, 0xFF, 0x03, 0x7E, 0x7F, 0x03, 0xFF, 0xFE, 9, //3
0xC3, 0xC3, 0xC3, 0xFF, 0x7F, 0x03, 0x03, 0x03, 9, //4
0xFF, 0xFF, 0xC0, 0xFE, 0xFF, 0x03, 0xFF, 0xFE, 9, //5
0x7F, 0xFF, 0xC0, 0xFE, 0xFF, 0xC3, 0xFF, 0x7E, 9, //6
0x7E, 0xFF, 0xC3, 0xC3, 0x03, 0x03, 0x03, 0x03, 9, //7
0x7E, 0xFF, 0xC3, 0x7E, 0xFF, 0xC3, 0xFF, 0x7E, 9, //8
0x7E, 0xFF, 0xC3, 0xFF, 0x7F, 0x03, 0xFF, 0xFE, 9, //9
0x00, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x00, 3, //:
0x00, 0xC0, 0xC0, 0x00, 0x00, 0xC0, 0xC0, 0x40, 3, //;
0x18, 0x38, 0x70, 0xE0, 0xE0, 0x70, 0x38, 0x18, 6, //<
0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 9, //=
0xC0, 0xE0, 0x70, 0x38, 0x38, 0x70, 0xE0, 0xC0, 6, //>
0x7E, 0xFF, 0xC3, 0x1F, 0x1E, 0x00, 0x18, 0x18, 9, //?
0x7E, 0xFF, 0xC3, 0xDF, 0xDF, 0xDB, 0xFF, 0x7F, 9, //@
0x7E, 0xFF, 0xC3, 0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 9, //A
0xFE, 0xFF, 0xC3, 0xFE, 0xFF, 0xC3, 0xFF, 0xFE, 9, //B
0x7E, 0xFF, 0xC3, 0xC0, 0xC0, 0xC3, 0xFF, 0x7E, 9, //C
0xFE, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0xFE, 9, //D
0x7F, 0xFF, 0xC0, 0xFE, 0xFE, 0xC0, 0xFF, 0x7F, 9, //E
0x7F, 0xFF, 0xC0, 0xFE, 0xFE, 0xC0, 0xC0, 0xC0, 9, //F
0x7F, 0xFF, 0xC0, 0xDF, 0xDF, 0xC3, 0xFF, 0x7F, 9, //G
0xC3, 0xC3, 0xC3, 0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 9, //H
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 3, //I
0x03, 0x03, 0x03, 0x03, 0xC3, 0xC3, 0xFF, 0x7E, 9, //J
0xC3, 0xC3, 0xC3, 0xFE, 0xFF, 0xC3, 0xC3, 0xC3, 9, //K
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 9, //L
0x7E, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 9, //M
0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 9, //N
0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, 9, //O
0xFE, 0xFF, 0xC3, 0xFF, 0xFE, 0xC0, 0xC0, 0xC0, 9, //P
0x7E, 0xFF, 0xC3, 0xC3, 0xCF, 0xCF, 0xFF, 0x7F, 9, //Q
0xFE, 0xFF, 0xC3, 0xFF, 0xFE, 0xC3, 0xC3, 0xC3, 9, //R
0x7F, 0xFF, 0xC0, 0xFE, 0x7F, 0x03, 0xFF, 0xFE, 9, //S
0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 9, //T
0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, 9, //U
0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0x7E, 0x3C, 0x18, 9, //V
0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFF, 0x7E, 9, //W
0xC3, 0xC3, 0xC3, 0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 9, //X
0xC3, 0xC3, 0xC3, 0xFF, 0x7E, 0x18, 0x18, 0x18, 9, //Y
0xFF, 0xFF, 0x03, 0x7F, 0xFE, 0xC0, 0xFF, 0xFF, 9, //Z
0xF0, 0xF0, 0xC0, 0xC0, 0xC0, 0xC0, 0xF0, 0xF0, 5, //[
0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 9, //(Backslash)
0xF0, 0xF0, 0x30, 0x30, 0x30, 0x30, 0xF0, 0xF0, 5, //]
0x70, 0xF8, 0xD8, 0x00, 0x00, 0x00, 0x00, 0x00, 6, //^
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 9, //_
0xC0, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 4, //`
0x7E, 0xFF, 0xC3, 0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 9, //a
0xFE, 0xFF, 0xC3, 0xFE, 0xFF, 0xC3, 0xFF, 0xFE, 9, //b
0x7E, 0xFF, 0xC3, 0xC0, 0xC0, 0xC3, 0xFF, 0x7E, 9, //c
0xFE, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0xFE, 9, //d
0x7F, 0xFF, 0xC0, 0xFE, 0xFE, 0xC0, 0xFF, 0x7F, 9, //e
0x7F, 0xFF, 0xC0, 0xFE, 0xFE, 0xC0, 0xC0, 0xC0, 9, //f
0x7F, 0xFF, 0xC0, 0xDF, 0xDF, 0xC3, 0xFF, 0x7F, 9, //g
0xC3, 0xC3, 0xC3, 0xFF, 0xFF, 0xC3, 0xC3, 0xC3, 9, //h
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 3, //i
0x03, 0x03, 0x03, 0x03, 0xC3, 0xC3, 0xFF, 0x7E, 9, //j
0xC3, 0xC3, 0xC3, 0xFE, 0xFF, 0xC3, 0xC3, 0xC3, 9, //k
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xFF, 0xFF, 9, //l
0x7E, 0xFF, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 9, //m
0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 9, //n
0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, 9, //o
0xFE, 0xFF, 0xC3, 0xFF, 0xFE, 0xC0, 0xC0, 0xC0, 9, //p
0x7E, 0xFF, 0xC3, 0xC3, 0xCF, 0xCF, 0xFF, 0x7F, 9, //q
0xFE, 0xFF, 0xC3, 0xFF, 0xFE, 0xC3, 0xC3, 0xC3, 9, //r
0x7F, 0xFF, 0xC0, 0xFE, 0x7F, 0x03, 0xFF, 0xFE, 9, //s
0xFF, 0xFF, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 9, //t
0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xC3, 0xFF, 0x7E, 9, //u
0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0x7E, 0x3C, 0x18, 9, //v
0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xFF, 0x7E, 9, //w
0xC3, 0xC3, 0xC3, 0x7E, 0xFF, 0xC3, 0xC3, 0xC3, 9, //x
0xC3, 0xC3, 0xC3, 0xFF, 0x7E, 0x18, 0x18, 0x18, 9, //y
0xFF, 0xFF, 0x03, 0x7F, 0xFE, 0xC0, 0xFF, 0xFF, 9, //z
0x38, 0x78, 0x60, 0xE0, 0xE0, 0x60, 0x78, 0x38, 6, //{
0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 3, //|
0xE0, 0xF0, 0x30, 0x38, 0x38, 0x30, 0xF0, 0xE0, 6, //}
0x76, 0xFE, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 8, //~
0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 3 //
};
