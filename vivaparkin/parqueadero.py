import datetime

class Parqueadero:
    def __init__(self, filas=8, columnas=8):
        self.filas = max(filas, 8)
        self.columnas = max(columnas, 8)
        self.mapa = self.crear_mapa()
        self.vehiculos = {}
        self.tarifa = 201
    
    def crear_mapa(self):
        mapa = [[' ' for i in range(self.columnas)] for i in range(self.filas)]
        
        entrada_col = self.columnas // 2
        mapa[0][entrada_col] = 'E'
        self.entrada = (0, entrada_col)
        
        salida_col = self.columnas // 2
        mapa[-1][salida_col] = 'S'
        self.salida = (self.filas-1, salida_col)
        
        via_col1 = entrada_col - 1
        via_col2 = entrada_col + 1
        
        for fila in range(self.filas):
            mapa[fila][via_col1] = '|'
            mapa[fila][via_col2] = '|'
        
        for fila in range(1, self.filas-1):
            for col in range(self.columnas):
                if col not in [via_col1, via_col2, entrada_col, salida_col] and fila % 2 == 1:
                    mapa[fila][col] = 'P'
        return mapa
    
    def mostrar_mapa(self):
        print("\nMapa del Parqueadero:")
        print("Significados de simbolos: E = Entrada, S = Salida, | = Vía, P = Libre, X = Ocupado")
        print("-" * (self.columnas * 2 + 3))
        
        for fila in self.mapa:
            print("| " + " ".join(fila) + " |")
        
        print("-" * (self.columnas * 2 + 3))
        
        libres = sum(fila.count('P') for fila in self.mapa)
        ocupados = sum(fila.count('X') for fila in self.mapa)
        print(f"Espacios libres: {libres} | Ocupados: {ocupados}")
    
    def registrar_entrada(self, placa):
        for fila in range(self.filas):
            for col in range(self.columnas):
                if self.mapa[fila][col] == 'P':
                    self.mapa[fila][col] = 'X'
                    self.vehiculos[placa] = (fila, col, datetime.datetime.now())
                    print(f"\nVehículo {placa} estacionado en posición ({fila}, {col})")
                    return True
        
        print("\nNo hay espacios disponibles")
        return False
    
    def registrar_salida(self, placa):
        if placa not in self.vehiculos:
            print("\nVehículo no registrado")
            return False
        
        fila, col, entrada = self.vehiculos[placa]
        self.mapa[fila][col] = 'P'
        salida = datetime.datetime.now()
        tiempo = (salida - entrada).total_seconds() / 60
        costo = tiempo * self.tarifa
        
        del self.vehiculos[placa]
        
        print(f"\nVehículo {placa} salió del parqueadero")
        print(f"Tiempo: {tiempo:.1f} minutos | Total a pagar: ${costo:.0f} Pesos")
        return True
    
    def mostrar_ruta(self, placa):
        if placa not in self.vehiculos:
            print("\nVehículo no registrado")
            return
        
        fila, col, i = self.vehiculos[placa]
        print(f"\nRuta al vehículo {placa} en ({fila}, {col}):")
        
        entrada_fila, entrada_col = self.entrada
        print("1. Ingrese por la entrada (E)")
        
        if fila > entrada_fila:
            print(f"2. Avance {fila - entrada_fila} filas hacia abajo")
        
        if col > entrada_col:
            print(f"3. Gire a la derecha y avance {col - entrada_col} columnas")
        elif col < entrada_col:
            print(f"3. Gire a la izquierda y avance {entrada_col - col} columnas")
        
        print(f"4. El vehículo está en su derecha (posición {fila},{col})")

def mostrar_menu():
    print("\n MENÚ PRINCIPAL")
    print("1. Mostrar mapa del parqueadero")
    print("2. Registrar entrada de vehículo")
    print("3. Registrar salida de vehículo")
    print("4. Mostrar ruta a vehículo")
    print("5. Salir")

if __name__ == "__main__":
    parqueadero = Parqueadero(9, 9)
    
    while True:
        mostrar_menu()
        opcion = input("Seleccione una opción (1-5): ")
        
        if opcion == "1":
            parqueadero.mostrar_mapa()
        elif opcion == "2":
            placa = input("Ingrese la placa del vehículo: ").upper()
            parqueadero.registrar_entrada(placa)
        elif opcion == "3":
            placa = input("Ingrese la placa del vehículo: ").upper()
            parqueadero.registrar_salida(placa)
        elif opcion == "4":
            placa = input("Ingrese la placa del vehículo: ").upper()
            parqueadero.mostrar_ruta(placa)
        elif opcion == "5":
            print("Gracias por usar el sistema. ¡Hasta pronto!")
            break
        else:
            print("Opción no válida. Intente nuevamente.")
        
        input("\nPresione Enter para continuar...")