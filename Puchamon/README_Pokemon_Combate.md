# Sistema de Combate Pokémon en C++

## Descripción del Proyecto

Este proyecto implementa un sistema de combate por turnos inspirado en Pokémon, desarrollado en **C++**. Cumple con los requisitos mínimos establecidos:

- Sistema de combate por turnos
- Menú textual interactivo
- Soporte para múltiples ataques
- Detección de victoria

---

## Estructura del Código

### 1. `Ataque` (`Ataque.h` / `Ataque.cpp`)

**¿Para qué se implementó?**  
Representa los movimientos que puede usar un Pokémon en combate.

**¿Por qué es necesario?**  
Cada Pokémon debe tener ataques únicos (con nombre y daño específico).

**Implementación:**
```cpp
class Ataque {
private:
    std::string nombre;
    int damage;
public:
    Ataque(std::string nombre, int damage);
    std::string getNombre() const;
    int getDamage() const;
};
```

---

### 2. `Pokemon` (`Pokemon.h` / `Pokemon.cpp`)

**¿Para qué se implementó?**  
Modela a un Pokémon con sus atributos, ataques y lógica de combate.

**¿Por qué es necesario?**  
Permite gestionar la salud, ataques disponibles y determinar si un Pokémon ha sido derrotado.

**Implementación:**
```cpp
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
    // Otros métodos relevantes
};
```

---

### 3. Sistema de Combate (`main.cpp`)

**¿Para qué se implementó?**  
Gestiona la interacción por turnos entre dos Pokémon.

**¿Por qué es necesario?**  
Simula el flujo de combate con turnos alternados, elección de ataques y detección de victoria.

**Implementación básica:**
```cpp
void realizarTurno(Pokemon& atacante, Pokemon& defensor) {
    // Mostrar menú de ataques
    // Calcular y aplicar daño
    // Mostrar resultados
}

while (!pokemon1.estaDebilitado() && !pokemon2.estaDebilitado()) {
    realizarTurno(pokemon1, pokemon2);
    realizarTurno(pokemon2, pokemon1);
}
```

---

## ✅ Requisitos Cumplidos

| Requisito            | Implementación                            |
|----------------------|--------------------------------------------|
| Combate por turnos   | Alternancia en el bucle principal          |
| Menú textual         | Opciones de ataque en `realizarTurno()`    |
| Múltiples ataques    | Vector de ataques en la clase `Pokemon`    |
| Sistema de victoria  | Lógica basada en `estaDebilitado()`        |

---

## 🛠️ Cómo Compilar y Ejecutar

### Compilación
```bash
g++ -std=c++11 main.cpp Pokemon.cpp Ataque.cpp -o pokemon
```

### Ejecución
```bash
./pokemon
```

---
