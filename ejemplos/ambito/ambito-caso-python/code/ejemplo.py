a = 1
b = 2

def funcion1():
    print('from funcion1:',a+b) 

def funcion2():
    print('from funcion2:',a+b)
    a = 20
    b = 20

def funcion3():
    global a
    global b
    a = 4
    b = 3
    print ('from funcion3',a+b)

def funcion4():
    a = 10
    b = 10
    print ('from funcion4',a+b)

funcion1()
#funcion2()
funcion3()
funcion4()
print('a: ',a)
print('b: ',b)