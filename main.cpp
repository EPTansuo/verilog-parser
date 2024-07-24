#include "vparser.h"
#include <iostream>


int main(){
        VParser parser;
        parser.read_verilog(std::string("/home/han/Disk/Document/PROJECT/learn/verilog-parser/test/test.v"));
        parser.make_token(); 
        return 0;
}

