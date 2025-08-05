#pragma once

#ifdef DLL_FACTORY
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __declspec(dllimport)
#endif

#include <iostream> // Console Inputs/Outputs
#include <filesystem> // PATH use
#include <cstdio> // Create, Read, Update, Delete files  
#include <string> // String 
#include <fstream> 

using string = std::string;
using path = std::filesystem::path;
using ofs = std::ofstream;

class EXPORT CRUD {
private:
    void Path(std::string direction);
public:
    void Create(std::string direction, std::string filename, std::string extension);
    void DeletoP(std::string direction);
    void DeletoF(std::string direction, std::string filename, std::string extension);
};

