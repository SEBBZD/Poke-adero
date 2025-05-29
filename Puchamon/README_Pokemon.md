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
Ataque.h declara la clase Ataque, su estructura, métodos y atributos. <br>
Ataque.cpp implementa los métodos declarados en Ataque.h y define como funciona cada metodo.


### 2. `Pokemon` (`Pokemon.h` / `Pokemon.cpp`)

**¿Para qué y porque se implemento?** <br> 
Pokemon.h declara la clase pokemon, su estructura, métodos y atributos. <br>
Pokemon.cpp implementa los métodos declarados en Pokemon.h y define como funciona cada metodo.

---

### 3. Sistema de Combate (`main.cpp`)

**¿Para qué y porque se implemento?** <br> 
Crea dos Pokémon vacíos y los configura con inicializarPokemons(). <br>
Alterna turnos entre pokemon1 y pokemon2. <br>
En cada turno, el usuario elige un ataque. <br>
Verifica si algún Pokémon queda debilitado (estaDebilitado()). <br>
Anuncia al ganador cuando un Pokémon llega a 0 HP.

## Cómo Compilar y Ejecutar

Para compilar el codigo se tiene que abrir una terminal en la carpeta donde se descargue el proyexto y poner los siguientes codigos en la terminal.
Para abrir una terminal en la carpeta solo da click derecho dentro de la carpeta y dale click donde dice " Abrir en terminal ".

### Compilación
```bash
g++ -std=c++11 main.cpp Pokemon.cpp Ataque.cpp -o pokemon
```

### Ejecución
```bash
./pokemon
```

---
