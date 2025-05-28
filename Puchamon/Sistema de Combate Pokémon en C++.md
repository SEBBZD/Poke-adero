Descripción del Proyecto
Este proyecto implementa un sistema de combate Pokémon por turnos en C++, cumpliendo con los requisitos mínimos solicitados: sistema de combate, menú textual, múltiples ataques y detección de victoria.

Estructura del Código
1. Clase Ataque (Ataque.h/Ataque.cpp)
¿Para qué se implementó?
Para representar los diferentes movimientos que pueden usar los Pokémon en batalla.

¿Por qué se consideró necesario?
Cada Pokémon necesita tener ataques con características propias (nombre, daño) que puedan ser ejecutados durante el combate.

¿Cómo se implementó?

cpp
class Ataque {
private:
    std::string nombre;
    int damage;
public:
    Ataque(std::string nombre, int damage);
    std::string getNombre() const;
    int getDamage() const;
};
2. Clase Pokemon (Pokemon.h/Pokemon.cpp)
¿Para qué se implementó?
Para representar a cada Pokémon con sus atributos y capacidades.

¿Por qué se consideró necesario?
Se necesitaba un objeto que almacenara:

Estadísticas (HP, ataques)

Lógica de combate (recibir daño, calcular daño)

Estado actual (debilitado o no)

¿Cómo se implementó?

cpp
class Pokemon {
private:
    std::string nombre;
    int hp;
    int hpActual;
    std::vector<Ataque> ataques;
public:
    Pokemon(std::string nombre, int hp);
    void aprenderAtaque(Ataque ataque);
    void recibirDamage(int cantidad);
    bool estaDebilitado() const;
    // ... otros métodos ...
};
3. Sistema de Combate (main.cpp)
¿Para qué se implementó?
Para manejar la interacción por turnos entre dos Pokémon.

¿Por qué se consideró necesario?
Para cumplir con el requisito de combate por turnos alternados donde:

Cada Pokémon ataca por turno

Se muestra información del estado

Se determina un ganador

¿Cómo se implementó?

cpp
void realizarTurno(Pokemon& atacante, Pokemon& defensor) {
    // Mostrar menú de ataques
    // Calcular daño
    // Aplicar daño
    // Mostrar resultados
}

// Bucle principal de combate
while(!pokemon1.estaDebilitado() && !pokemon2.estaDebilitado()) {
    realizarTurno(pokemon1, pokemon2);
    realizarTurno(pokemon2, pokemon1);
}
Requisitos Cumplidos
Requisito	Implementación
Combate por turnos	Sistema alternado en main.cpp
Menú textual	Interfaz en realizarTurno()
Múltiples ataques	Vector de ataques en clase Pokemon
Sistema de victoria	Verificación con estaDebilitado()
Cómo Compilar y Ejecutar
Compilación:

bash
g++ -std=c++11 main.cpp Pokemon.cpp Ataque.cpp -o pokemon
Ejecución:

bash
./pokemon
Posibles Mejoras
Sistema de tipos: Implementar ventajas/desventajas entre tipos

Niveles y experiencia: Añadir progresión

Interfaz gráfica: Usar SFML o similar

Más Pokémon: Expandir el roster disponible

Justificación de Decisiones
Simpleza: Se priorizó cumplir con los requisitos mínimos de forma clara

Extensibilidad: El código está estructurado para fácil expansión

Legibilidad: Nombres descriptivos y estructura organizada
