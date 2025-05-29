# Sistema de Combate Pokémon en C++

## Descripción del Proyecto

Este proyecto implementa un sistema de combate por turnos inspirado en Pokémon, desarrollado en **C++**. Cumple con los requisitos mínimos establecidos:

- Sistema de combate por turnos
- Menú textual interactivo
- Soporte para múltiples ataques
- Detección de victoria

En el proyecto se utilizo estructuras para mejorar como se trabajaba y que fuera mas facil de entender que hacia cada cosa, se utilizaron nombres en inglés en ciertas partes del código, ya que caracteres especiales como 'ñ' o tildes generaban errores.

---

## Estructura del Código

### 1. `Ataque` (`Ataque.h` / `Ataque.cpp`)

**¿Para qué y porque se implemento?** <br>
Contienen las funciones, la estructura que va a tener cada ataque y como se va a utilizar


### 2. `Pokemon` (`Pokemon.h` / `Pokemon.cpp`)

**¿Para qué y porque se implemento?** <br> 
Permite gestionar la salud, ataques disponibles, logica del combate y determinar si un Pokémon ha sido derrotado.

---

### 3. Sistema de Combate (`main.cpp`)

**¿Para qué y porque se implemento?** <br> 
Gestiona la interacción por turnos entre dos Pokémon simula el combate por turnos alternados, elección de ataques y detección de victoria.

## Cómo Compilar y Ejecutar

### Compilación
```bash
g++ -std=c++11 main.cpp Pokemon.cpp Ataque.cpp -o pokemon
```

### Ejecución
```bash
./pokemon
```

---
