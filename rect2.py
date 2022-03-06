class rectangle():
    def __init__(self):
        self.l=int(input("enter the length"))
        self.w=int(input("enter the breadth"))
    def area(self):
         return self.l*self.w
    def perimeter(self):
         return 2*(self.l+self.w)
r1=rectangle()
print('area1 is',r1.area(),"perimeter1 is:",r1.perimeter())
r2=rectangle()
print('area2 is',r2.area(),"perimeter2 is:",r2.perimeter())
if r1.area()==r2.area():
    print("rectangles are equal")
else:
    print("rectangle are  not equal")
