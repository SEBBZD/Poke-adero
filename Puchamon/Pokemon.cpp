#include "Pokemon.h"
#include <iostream>

Pokemon::Pokemon(std::string nombre, int hp) 
    : nombre(nombre), hp(hp), hpActual(hp) {}

void Pokemon::aprenderAtaque(Ataque ataque) {
    if (ataques.size() < 4) {
        ataques.push_back(ataque);
    }
}

void Pokemon::recibirDamage(int cantidad) {
    hpActual -= cantidad;
    if (hpActual < 0) hpActual = 0;
}

bool Pokemon::estaDebilitado() const {
    return hpActual <= 0;
}

void Pokemon::mostrarAtaques() const {
    for (size_t i = 0; i < ataques.size(); ++i) {
        std::cout << i+1 << ". " << ataques[i].getNombre() 
                  << " (Damage: " << ataques[i].getDamage() << ")\n";
    }
}

Ataque Pokemon::getAtaque(int indice) const {
    return ataques[indice];
}

std::string Pokemon::getNombre() const {
    return nombre;
}

int Pokemon::getHPActual() const {
    return hpActual;
}

int Pokemon::getHPMax() const {
    return hp;
}