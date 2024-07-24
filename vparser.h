#pragma once

#include <string>
#include <vector>
#include "lex.h"
class VParser{
private:
        std::string file_name;
        std::string src;
        std::vector<std::pair<TK_Type, std::string>> tokens;
public:
        VParser():file_name(""),src(""){ }

        bool read_verilog(const std::string &);
        bool make_token();

};
