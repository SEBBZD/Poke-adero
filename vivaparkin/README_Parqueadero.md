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

### 1. `Parqueadero` (`parquedero.py`)

**¿Como funciona el codigo?** <br>

  1 Mapa del parqueadero:  
    Se genera un espacio de parqueadero de al menos 8X8 espacios, ademas se les representan los espacios con simbolos:  
    **E**=Entrada  
    **S**=Salida  
    **I**=Vias de Acceso  
    **P**=Espacios Disponibles  
    **X**=Espacios Ocupados  
  2 Registro de entrada:  
    Al ingresar un vehiculo se registra la placa, se le asigna el primer espacio disponible (**P¨**) y se le registra la hora de entrada.  
  3 Registro de salida:  
    Se calcula el tiempo de permanencia y el costo total. Ademas <em>se tienen en cuenta ciertas condiciones:<em>  
    - **Descuento del 50%** si el vehiculo permanecio 5 minutos o menos.  
    - **Tarifa nocturna** si el ingreso ocurrio entre las 7 p.m. y las 6 a.m.  
  4 Ruta:  
    Se muestran una serie de instrucciones al conductor sobre como llegar desde la entrada hasta su vehiculo.  
  5 Menu Interactivo:  
    Se presenta un menu con opciones numeradas.


### 2. `Aspectos Tecnicos` (`parqueadero.py`)  

Se uso la libreria **datetime** para los tiempos de entrada y salida.<br>
Se controlan los vehiculos con una diccionario donde la clave es la placa.<br>
El sistema es adaptable a otros espacios de parqueadero.<br>

### 3. Aspectos de Innovacion(`parqueadero.py`)  
- Se implemento un descuento automatico teniendo en cuenta una franja de tiempo.
- Se incluyo una tarifa nocturna para ingresos entre 7 p.m. y 6 a.m.
- Se dan instrucciones claras para encontrar el vehiculo desde la salida.

## Cómo Compilar y Ejecutar

Para compilar el codigo se tiene que abrir una terminal en la carpeta donde se descargue el proyecto y poner los siguientes codigos en la terminal.
Para abrir una terminal en la carpeta solo da click derecho dentro de la carpeta y dale click donde dice " Abrir en terminal ".
