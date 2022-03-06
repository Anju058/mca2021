class rectangle():
    __length=None
    __width=None
    def __init__(self):
         self.__length=int(input("enter the length"))
         self.__width=int(input("enter the height"))
    def area(self):
         return(self.__length*self.__width)
r1 = rectangle()
r2 = rectangle()
print("area of rectangle",r1.area())
print("area of rectangle",r2.area())
if r1.area()<r2.area():
    print("area2 is largest")
else:
    print("area1 is largest")
    
      
