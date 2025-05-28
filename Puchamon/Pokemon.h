#ifndef POKEMON_H
#define POKEMON_H
#include "Ataque.h"
#include <vector>
#include <string>

class Pokemon {
private:
    std::string nombre;
    int hp;
    int hpActual;
    std::vector<Ataque> ataques;
    
public:
    Pokemon(std::string nombre, int hp);
    
    void aprenderAtaque(Ataque ataque);
    Ataque getAtaque(int indice) const;
    void mostrarAtaques() const;
    void recibirDamage(int cantidad);
    bool estaDebilitado() const;
    std::string getNombre() const;
    int getHPActual() const;
    int getHPMax() const;
};

#endif // POKEMON_H