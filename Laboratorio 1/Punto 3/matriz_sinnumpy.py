import time

# crea la matriz cuadrada de un tamaño y valor cualquiera
def array(tam, valor):
    A = []

    # llena la matriz de 0's
    for i in range(0, tam):
        A.append([0] * tam)

    # llena la matriz de el valor que digiten
    for i in range(0, tam):
        for j in range(0, tam):
            A[i][j] = valor

    return A

# multiplica la matriz
def mult_matriz(A, B):
    C = []
    for i in range(len(A)):
        C.append([0] * (len(B[0])))

    for i in range(len(A)):
        for j in range(len(B)):
            for k in range(len(B[0])):
                C[i][j] += A[i][k] * B[k][j]
    return C

def promedio(array):
    sum = 0.0
    for i in range(0, len(array)):
        sum = sum + array[i]
    return sum / len(array)

n = []
# arreglo de tamaño n = 50, 100, 150, 200, ... , 500
for i in range(10, 110, 10):
    n.append(i)

# almacena los valores para cada n
t_10 = []
t_20 = []
t_30 = []
t_40 = []
t_50 = []
t_60 = []
t_70 = []
t_80 = []
t_90 = []
t_100 = []

# usamos tamaños de n = 10, 20, 30, 40, ... , 100
for i in range(15):
    for j in range(10, 110, 10):
        mat1 = (array(j, 1))
        mat2 = (array(j, 2))

        start_time = time.time()  # tiempo inicial
        solucion = mult_matriz(mat1, mat2)
        tiempo = (time.time() - start_time)

        # pregunta donde esta j para almacenar el tiempo de acuerdo a n
        if (j == 10):
            t_10.append(tiempo)
        elif (j == 20):
            t_20.append(tiempo)
        elif (j == 30):
            t_30.append(tiempo)
        elif (j == 40):
            t_40.append(tiempo)
        elif (j == 50):
            t_50.append(tiempo)
        elif (j == 60):
            t_60.append(tiempo)
        elif (j == 70):
            t_70.append(tiempo)
        elif (j == 80):
            t_80.append(tiempo)
        elif (j == 90):
            t_90.append(tiempo)
        elif (j == 100):
            t_100.append(tiempo)

        #print("El tiempo para ", j, " es de ", tiempo)

# sacamos el promedio y almacenamos en un nuevo arreglo
t_final = []
t_final.append(promedio(t_10))
t_final.append(promedio(t_20))
t_final.append(promedio(t_30))
t_final.append(promedio(t_40))
t_final.append(promedio(t_50))
t_final.append(promedio(t_60))
t_final.append(promedio(t_70))
t_final.append(promedio(t_80))
t_final.append(promedio(t_90))
t_final.append(promedio(t_100))
#print(t_final)

# tiempos promedios
for i in range(10):
    print("Para n = " , n[i] , " tenemos un tiempo promedio de ",  t_final[i])