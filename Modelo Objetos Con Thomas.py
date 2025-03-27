vertices = []
caras = []   

while True: 
        print("Seleccione operación:")
        print("1. Vertices")
        print("2. Caras")
        print("3. SALIR")
        
        opcion = input("Ingrese opción (1/2/3): ")
        
        if opcion == '1':
            num_vertices = int(input("Ingrese el número de vértices: "))

            for i in range(num_vertices):
                print(f"Ingrese las coordenadas del vértice {i+1}:")
                x = float(input("x: "))
                y = float(input("y: "))
                z = float(input("z: "))
                vertices.append((x, y, z))

        elif opcion =='2':
            num_caras = int(input("Ingrese el número de caras: "))

            for i in range(num_caras):
                print(f"Ingrese los índices de los vértices para la cara {i+1} (separados por espacio):")
                indices = input().split()
                indices = [int(indice) for indice in indices]
                caras.append(indices)
        
        if opcion == '3':
            print("Saliendo...")
            print("Vértices ingresados:", vertices)
            print("Caras ingresadas:", caras)
            break
            
        
