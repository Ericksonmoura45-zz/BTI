#exercicio 1
def deq(numList):
    
    numList = sorted(numList)
    lenList = len(numList)
    
    if(lenList % 2 == 0):
        submenor = numList[0:int(lenList/2)]
        submaior = numList[int(lenList/2):lenList]
    else:
        submenor = numList[0:int((lenList-1)/2)]
        submaior = numList[int((lenList+1)/2):lenList]
        
    q1 = mediana(submenor)
    q3 = mediana(submaior)

    return (q3-q1)/2

print(deq(data1))
print(deq(data2))

#exercicioqr(numList):
    numList = sorted(numList)
    lenList = len(numList)
    
    if(lenList % 2 == 0):
        submenor = numList[0:int(lenList/2)]
        submaior = numList[int(lenList/2):lenList]
    else:
        submenor = numList[0:int((lenList-1)/2)]
        submaior = numList[int((lenList+1)/2):lenList]
        
    q1 = mediana(submenor)
    q3 = mediana(submaior)

    return (q3-q1)
    
    
    return

print(iqr(data1))
print(iqr(data2))

#exercicio 3
1np = np.array(data1)
medianadata1 = data1np.mean()
desvio1 = data1np - medianadata1
desvio1.mean()

#exercicio 4
data1np = np.array(data1)
medianadata1 = data1np.mean()
desvio1 = abs(data1np - medianadata1)
desvio1.mean()

#exercicio 5
data1np = np.array(data1)
medianadata1 = data1np.mean()
desvio1 = abs(data1np - medianadata1)**2
desvio1.mean()

#exercicio 6data1np = np.array(data1)
medianadata1 = data1np.mean()
desvio1 = abs(data1np - medianadata1)**2
desvio1.mean()**0.5

#exercicio 7
npA = np.array(A)
print(npA.mean())
print(npA.std())

npB = np.array(B)
print(npB.mean())
print(npB.std())

npC = np.array(C)
print(npC.mean())
print(npC.std())

#exercicio 8

#exercicio 9

