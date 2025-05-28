# 📘 Análisis del Sistema de Combate Pokémon en C++

Este documento responde a las preguntas clave sobre cada componente del sistema:  
**¿Para qué se implementó?**, **¿Por qué se consideró necesario?** y **¿Cómo se llevó a cabo su implementación?**

---

## 🔹 Clase `Ataque` (`Ataque.h` / `Ataque.cpp`)

### ¿Para qué se implementó?
Para representar los diferentes movimientos que un Pokémon puede usar durante el combate.

### ¿Por qué se consideró necesario?
Cada Pokémon necesita ejecutar ataques con nombre y daño distintos. La abstracción en una clase permite flexibilidad y escalabilidad en el diseño.

### ¿Cómo se llevó a cabo su implementación?
Se definió una clase con atributos privados:
- `std::string nombre`
- `int damage`

Y métodos públicos:
```cpp
Ataque(std::string nombre, int damage);
std::string getNombre() const;
int getDamage() const;
```

---

## 🔹 Clase `Pokemon` (`Pokemon.h` / `Pokemon.cpp`)

### ¿Para qué se implementó?
Para modelar a los Pokémon como entidades con nombre, HP (puntos de salud), y una lista de ataques.

### ¿Por qué se consideró necesario?
Era fundamental representar a cada Pokémon con:
- Estadísticas individuales
- Lógica de combate (ataques, daño, estado)

### ¿Cómo se llevó a cabo su implementación?
Se implementó con atributos como:
- `std::string nombre`
- `int hp`, `hpActual`
- `std::vector<Ataque> ataques`

Métodos clave:
- `aprenderAtaque()`
- `recibirDamage()`
- `estaDebilitado()`
- `mostrarAtaques()`
- `getHPActual()`, `getHPMax()`, `getNombre()`

---

## 🔹 Sistema de Combate (`main.cpp`)

### ¿Para qué se implementó?
Para gestionar el flujo de combate entre dos Pokémon por turnos.

### ¿Por qué se consideró necesario?
Permite:
- Alternancia de turnos
- Selección de ataques
- Detección de victoria

### ¿Cómo se llevó a cabo su implementación?
- `inicializarPokemons()` crea dos Pokémon con ataques.
- `mostrarEstado()` muestra el HP actual.
- `realizarTurno()` permite seleccionar un ataque y aplicarlo.
- Bucle `while` en `main()` gestiona el combate hasta que un Pokémon se debilita.

---
