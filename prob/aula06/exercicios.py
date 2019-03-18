import numpy as np
import matplotlib.pyplot as plt

#Exercicio 1: Crie uma funcao em Python que receba uma lista de numero e encontre a sua mediana
def mediana(list_num):

    return np.median(list_num)

lista = [1,2,3,4,3,5]

print(mediana(lista))

#Exercicio 2: Crie uma funcao em Python que receba uma lista de numero e encontre a moda.
def moda(lista):
    list_ocur = np.bincount(lista)
    index_moda = np.argmax(list_ocur)
    return lista[index_moda - 1]

print(moda(lista))