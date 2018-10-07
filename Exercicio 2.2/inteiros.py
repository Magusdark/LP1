#fazer um programa que print os numeros entre 2 inteiros

def pega_numero():
    a=int(input("escolha um numero a: "))
    b=int(input("escolha um numero b: "))
    if a>b:
        for i in range(b+1,a):
            print (i)
    else:
        for i in range(a+1,b):
            print (i)
#main
x=pega_numero()
print(x)
