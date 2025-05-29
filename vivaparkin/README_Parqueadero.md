# Sistema de Parqueadero en Python

## Descripción del Proyecto

Este proyecto implementa un sistema de parqueadero, desarrollado en **Python**. Cumple con los requisitos mínimos establecidos:

- Generación de un mapa del parqueadero
- Vías, entrada y salida
- Registro de vehículos
- Sistema de cobro
- Sistema de disponibilidad:

En el proyecto se utilizo estructuras para mejorar como se trabajaba y que fuera mas facil de entender que hacia cada cosa. Necesite ayuda de IA en el sistema de cobro y en la biblioteca datetime.

---

## Estructura del Código

### 1. `Parquedero` (`parquedero.py`)

**¿Como funciona el codigo?** <br>
Se utilizaron 7 diferentes def para definir funciones y poder organizar el codigo, se explicara cada def para lograr entender como funcionan.


### 2. `__init__` (`def __init__(self, filas=8, columnas=8):`)

```python
def __init__(self, filas=8, columnas=8):
        self.filas = max(filas, 8)
        self.columnas = max(columnas, 8)
        self.mapa = self.crear_mapa()
        self.vehiculos = {}
        self.tarifa = 201
```


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
