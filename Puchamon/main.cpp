#include "Pokemon.h"
#include <iostream>

void inicializarPokemons(Pokemon & pokemon1, Pokemon & pokemon2) {
    Ataque ascuas("Ascuas", 40);
    Ataque lanzallamas("Lanzallamas", 90);
    Ataque llamarada("Llamarada", 110);
    Ataque anillo_igneo("Anillo ígneo", 80);
    
    Ataque hidrobomba("Hidrobomba", 110);
    Ataque hidrocanon("Hidrocañón", 90);
    Ataque hidropulso("Hidropulso", 60);
    Ataque surf("Surf", 90);
    
    pokemon1 = Pokemon("Charizard", 360);
    pokemon1.aprenderAtaque(ascuas);
    pokemon1.aprenderAtaque(lanzallamas);
    pokemon1.aprenderAtaque(llamarada);
    pokemon1.aprenderAtaque(anillo_igneo);
    
    pokemon2 = Pokemon("Greninja", 348);
    pokemon2.aprenderAtaque(hidrobomba);
    pokemon2.aprenderAtaque(hidrocanon);
    pokemon2.aprenderAtaque(hidropulso);
    pokemon2.aprenderAtaque(surf);
}
void mostrarEstado(const Pokemon& pokemon) {
    std::cout << pokemon.getNombre() << " HP: " 
              << pokemon.getHPActual() << "/" 
              << pokemon.getHPMax() << "\n";
}
void realizarTurno(Pokemon & atacante, Pokemon & defensor) {
    std::cout << "\nTurno de " << atacante.getNombre() << "\n";
    mostrarEstado(atacante);
    
    std::cout << "Elige un ataque:\n";
    atacante.mostrarAtaques();
    
    int eleccion;
    std::cin >> eleccion;
    eleccion--;
    
    Ataque ataque = atacante.getAtaque(eleccion);
    
    int damage = ataque.getDamage();
    defensor.recibirDamage(damage);
    
    std::cout << atacante.getNombre() << " usó " << ataque.getNombre()
              << " e hizo " << damage << " de daño!\n";
}
int main() {
    Pokemon pokemon1("", 0), pokemon2("", 0);
    inicializarPokemons(pokemon1, pokemon2);
    
    std::cout << "¡Comienza la batalla Pokémon!\n";
    std::cout << pokemon1.getNombre() << " vs " << pokemon2.getNombre() << "\n";
    
    while (true) {
        realizarTurno(pokemon1, pokemon2);
        if (pokemon2.estaDebilitado()) {
            std::cout << pokemon2.getNombre() << " se debilitó!\n";
            std::cout << "¡" << pokemon1.getNombre() << " gana la batalla!\n";
            break;
        }
        
        realizarTurno(pokemon2, pokemon1);
        if (pokemon1.estaDebilitado()) {
            std::cout << pokemon1.getNombre() << " se debilitó!\n";
            std::cout << "¡" << pokemon2.getNombre() << " gana la batalla!\n";
            break;
        }
    }
    
    return 0;
}