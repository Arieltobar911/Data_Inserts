// Data Inserts 1.0.0 (08-03-2025)
// For: MySQL, MongoDB (JSON)
#include <iostream> // Temporal: For Console
#include <filesystem> // PATH's
#include <cstdio> // For CRUD
#include <string> // String text
#include <fstream> // Edit/Check Files

// Third-party Files
#include "nolan/json.hpp" // For JSON Files
// Note: "" for local files/library's, <> for native library's

// Usings
using string = std::string;
using path = std::filesystem::path;
using ofs = std::ofstream;
using ifs = std::ifstream;

// Create, Read, Update, Delete Files
void Path(string direction){
    path dir = direction;
    (std::filesystem::create_directory(direction)) ? std::cout << "Created Successfull" << "\n " : std::cout << "Error: directory creation failed or already exist." << "\n ";
};

class CRUD {
public:
    void Create(string direction, string filename, string extension){
        Path(direction);
        string full = direction + filename + extension;
        FILE* file = std::fopen(full.c_str(), "w");
        std::cout << "File Created Successfull" << "\n ";
    }
    void DeletoP(string direction){
        path dir = direction;
        (std::filesystem::remove(direction)) ? std::cout << "Removed Successfull" << "\n " : std::cout << "Error: directory removing failed or no exist." << "\n ";
    }
    void DeletoF(string direction, string filename, string extension){
        string full = direction + filename + extension;
        remove(full.c_str());
    }
};

class SQL : public CRUD {
public:
    void mql(string direction, string filename, string table, string aparts){
        string full = direction + filename + ".sql";
        Create(direction, filename, ".sql");
        ofs inside;
        inside.open(full, std::ios_base::app);
        inside << "INSERT INTO " << table << "(" << aparts << ")";
    };
};

class MongoJson : public CRUD {
public:

};


int main() {
    CRUD estance;
    return 0;
}