#ifndef ATAQUE_H
#define ATAQUE_H
#include <string>

class Ataque {
private:
    std::string nombre;
    int damage;
    
public:
    Ataque(std::string nombre, int damage);
    std::string getNombre() const;
    int getDamage() const;
};

#endif
