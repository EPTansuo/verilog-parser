#pragma once 

#include <map>
#include <string>


typedef enum
{
  TK_NOTYPE = 256,
  TK_EQ,          // ==
  TK_NUM,         // number
  TK_LP = '(',    // left (
  TK_RP = ')',    // right )
  TK_PLUS = '+',  // add/puls
  TK_MINUS = '-', // minus
  TK_MUL = '*',   // multiplication
  TK_DIV = '/',   // division
  TK_NEQ,         // !=
  TK_LAND,        // &&
  TK_LOR,         // ||
  TK_LNOT = '!',  // !
 // TK_NOT  = '~'
  //  TK_HEX,          // hex num
  TK_LE,            // <= less equal
  TK_CASSIGN,       // <= continuous assign
  TK_NASSIGN = '=', // = noncontinuous assign
  TK_GE,            // >= greater equal
  TK_GT = '>',      // > greater than
  TK_LT = '<',      // < less than
  TK_MODULE,        // module
  TK_IDENT,         // identifiy
  TK_ALWAYS,        // always
  TK_BEGIN,         // begin
  TK_END,           // end
  TK_ASSIGN,        // assign
  TK_INPUT,         // input
  TK_OUTPUT,        // output
  TK_REG,           // reg
  TK_WIRE,          // wire
  TK_AT = '@',      //@
  
} TK_Type;

