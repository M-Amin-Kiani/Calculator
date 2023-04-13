# written by Mohammad.Amin.Kiani

''' --------------------------------------------------------------------------- '''
import os
import math

def add(x, y):
    ''' + adds two numbers'''
    return x + y

def subtract(x, y):
    ''' - subtracts two numbers'''
    return x - y

def multiply(x, y):
    '''multiplies two numbers'''
    return x * y

def divide(x, y):
    '''divides two numbers'''
    return x / y

def tavan(x, y):
    '''pow of the number'''
    return math.pow(x, y)

def radical(x):
    '''sqrt of the number'''
    return math.sqrt(x)

def sinus(x):
    '''sin of the number'''
    return math.sin(x)

def cosinus(x):
    '''cos of the number'''
    return math.cos(x)

def tanjant(x):
    '''tan of the number'''
    return math.tan(x)

def fuct(x):
    '''fuct! of the number'''
    return math.factorial(x)

def logaritm(x, y):
    '''log of the number'''
    return math.log(x, y)

def menu() :
    print()
    print("************************************")
    print("Select operator :")
    print()
    print("1.Add")
    print("2.Subtract")
    print("3.Multiply")
    print("4.Divide")
    print("5.Power")
    print("6.Sqrt")
    print("7.Sin")
    print("8.Cos")
    print("9.Tan")
    print("10.Fuctorial")
    print("11.Log")
    print("0.exit")
    print("************************************")
    print()

while True:
    
    menu()
    key = input("Enter your option : ")
    
    if key in ('1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '0'):
        num1 = eval(input("Enter first number: "))
        num2 = eval(input("Enter second number: "))

        if key == '1':
            print(num1, "+", num2, "=", add(num1, num2))

        elif key == '2':
            print(num1, "-", num2, "=", subtract(num1, num2))

        elif key == '3':
            print(num1, "*", num2, "=", multiply(num1, num2))

        elif key == '4':
            print(num1, "/", num2, "=", divide(num1, num2))
        
        elif key == '5':
            print(num1, "^", num2, "=", tavan(num1, num2))
            
        elif key == '6':
            print(num1, "^ 1/2", "=", radical(num1))
            
        elif key == '7':
            print("sin of ", num1, "=", sinus(num1))
            
        elif key == '8':
            print("cos of ", num1, "=", cosinus(num1))
            
        elif key == '9':
            print("tan of ", num1, "=", tanjant(num1))
            
        elif key == '10':
            print("fuct! of ", num1, "=", fuct(num1))
            
        elif key == '11':
            print("log", num1, "_", num2, "=", logaritm(num1, num2))
            
        elif key == '0':
            break
        
        again = input("keep calculating? (yes/no): ")
        if again == "no":
          break
        
    else:
        print("Invalid Input. try again...!")
        
    os.system("cls")
        
''' --------------------------------------------------------------------------- '''