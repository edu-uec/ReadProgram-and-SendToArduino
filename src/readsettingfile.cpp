#include "readsettingfile.h"

ReadSettingFile::ReadSettingFile(std::string filePath){
    try{
        read_ini(filePath, pt);
    }
    catch (ini_parser_error &e){
        std::cout << "ERROR : Cannot Open File.\n" << e.what() << std::endl;
    }
}

std::string ReadSettingFile::read(std::string sectionKey){
    if (boost::optional<std::string> parameter = pt.get_optional<std::string>(sectionKey)) {
        //std::cout << sectionKey + ": " + parameter.get() << std::endl;
        return parameter.get();
    }
    else {
        std::cout << sectionKey + " not found" << std::endl;
    }
}
