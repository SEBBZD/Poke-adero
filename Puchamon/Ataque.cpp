#include "Ataque.h"

Ataque::Ataque(std::string nombre, int damage) 
    : nombre(nombre), damage(damage) {}

std::string Ataque::getNombre() const {
    return nombre;
}

int Ataque::getDamage() const {
    return damage;
}