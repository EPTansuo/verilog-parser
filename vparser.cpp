#include <fstream>
#include <iostream>
#include <string>
#include "vparser.h"
#include "color.h"

bool VParser::read_verilog(const std::string &_file_name){
        std::ifstream file(_file_name);
        if(!file.is_open()){
                std::cerr << C_L_RED << "ERROR: " << C_NONE <<"Failed to open file: "
                 << _file_name  <<std::endl;
                return false;
        }
        std::string line;
        while (getline(file, line)) {    
                std::cout << line << std::endl; 
                this->src += line;
        }
        this->file_name =  _file_name;
        return true;
}