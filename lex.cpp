#include <map>
#include <regex>
#include <string>
#include <iostream>
#include "vparser.h"
#include "lex.h"

extern "C" {std::map<TK_Type, std::string> tk_map = {
    {TK_NOTYPE, "\\s+"}, // /r /n /t
    {TK_EQ, "=="},
    {TK_NUM, "[0-9]+"}, // pure numbers
    {TK_LP, "\\("},
    {TK_RP, "\\)"},
    {TK_PLUS, "\\+"},
    {TK_MINUS, "\\-"},
    {TK_MUL, "\\*"},
    {TK_DIV, "\\/"},
    {TK_NEQ, "!="},
    {TK_LAND, "&&"},
    {TK_LOR, "\\|\\|"},
    {TK_LNOT, "!"},
    {TK_LE, "<="},      // need more operations  TK_LE TK_CASSIGN
    {TK_CASSIGN, "<="}, // continuous assignment
    {TK_NASSIGN, "="},
    {TK_GE, ">="}, // MUST put it before '>', otherwise ">=" will be divided to '>' and '='
    {TK_GT, ">"},
    {TK_LT, "<"}
};
}
bool VParser::make_token() {
    unsigned int position = 0;
    while (position < src.length()) {
        int ret;
        for(const auto& item: tk_map){
          std::regex reg(item.second);
          ret = std::regex_match(src,reg);
          std::cout<<ret<<std::endl;
          if(ret) break;
        }

        if(!ret)
          std::cout<<"ERROR"<<std::endl;
    }

    // Optionally, print tokens for debugging
    for (const auto& token : tokens) {
        std::cout << "Token Type: " << token.first << ", String: " << token.second << std::endl;
    }

    return true;
}