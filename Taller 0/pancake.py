import itertools

# almacena los flips
flips = []

# elimina los espacios
def spaces(array):
    string = ""
    for j in range(0, len(array)):
        string = string + str(array[j]) + ""
    return string

def flip(pancakes, position):
    top_cakes = pancakes[0:position + 1]
    top_cakes.reverse()
    bottom_cakes = pancakes[position + 1:]
    flips.append(len(bottom_cakes))
    return top_cakes + bottom_cakes

def arrayPancake(pancakes):
    len_pancakes = len(pancakes)

    # cantidad de flips
    count = 0
    while len_pancakes != 1:
        # mira si el ultimo valor es el mayor [..., 5]
        if (len_pancakes != (pancakes.index(len_pancakes) + 1)):
            # mira si el mayor no esta en la posicion 0 [5,...]
            if (pancakes.index(len_pancakes) != 0):
                pancakes = flip(pancakes, pancakes.index(len_pancakes))
                count += 1

            # el mayor esta ordenado, mira los siguientes
            pancakes = flip(pancakes, len_pancakes - 1)

            count += 1
            len_pancakes -= 1
        else:
            len_pancakes -= 1

    return count


def permutations(N, c):
    array = list(range(1, N + 1))
    print("Pn = ", N)
    for i in itertools.permutations(array, N):
        i = list(i)

        # total de flips
        total_flips = arrayPancake(i)
        # array original
        array_original = spaces(i)
        # flips
        res_flips = spaces(flips)

        # elimina los flips anteriores
        flips.clear()

        if c == 1:
            # Escribe Pn y todas las permutaciones que requieren Pn pasos
            if total_flips == N:
                print(array_original)
        elif c == 2:
            # Escribe Pn con todas las permutaciones y sus flips
            print(array_original, res_flips)
        elif c > 2:
            # Escribe Pn con todas las permutaciones, total de pasos y sus flips
            print(array_original, total_flips, res_flips)

N = 5
c = 3

permutations(N, c)

# codigo basado de http://www.pd4cs.org/program-algorithms_6_pancake-py/