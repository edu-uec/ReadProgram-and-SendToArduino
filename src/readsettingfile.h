#ifndef READSETTINGFILE_HPP
#define READSETTINGFILE_HPP

#include <iostream>
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/optional.hpp>

using namespace boost::property_tree;

class ReadSettingFile{
    public:
        ReadSettingFile(std::string filePath);
        std::string read(std::string sectionKey);
    private:
        ptree pt;
        std::string filePath;
};

#endif
