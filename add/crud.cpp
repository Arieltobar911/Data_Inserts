#include "crud.h"

// Create, Read, Update, Delete Files
void CRUD::Path(string direction){
    path dir = direction;
    (std::filesystem::create_directories(dir)) ? std::cout << "Created Successfull" << "\n " :
    std::cout << "Error: directory creation failed or already exist." << "\n ";
}

void CRUD::Create(string direction, string filename, string extension){
    Path(direction);
    path full = path(direction) / (filename + extension);
    FILE* file = std::fopen(full.string().c_str(), "w");
}

void CRUD::DeletoP(string direction){
    path dir = direction;
    (std::filesystem::remove(direction)) ? std::cout << "Removed Successfull" << "\n " : std::cout << "Error: directory removing failed or no exist." << "\n ";
}

void CRUD::DeletoF(string direction, string filename, string extension){
    string full = direction + filename + extension;
    remove(full.c_str());
}
