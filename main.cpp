// Data Inserts 1.0.2 (08-03-2025)(Not Complete)
// For: MySQL, MongoDB (JSON)

#include "nolan/json.hpp" // For JSON Files
#include "add/crud.h"
// Note: "" for local files/library's, <> for native library's

class SQL : CRUD{
public:
    void mql(string direction, string filename, string table, string aparts){
        string full = direction + filename + ".sql";
        Create(direction, filename, ".sql");
        ofs inside;
        inside.open(full, std::ios_base::app);
        inside << "INSERT INTO " << table << "(" << aparts << ")";
    };
};

int main() {
    CRUD estancia;
    estancia.Create("dad/","son",".txt");
    return 0;
}

// g++ main.cpp add/crud.cpp -std=c++17 -o programa.exe
// .\programa.exe