class time:
    def __init__(self):
        self.__hour=int(input("enter hour"))
        self.__minute=int(input("enter minute"))
        self.__second=int(input("enter second"))
    def __add__(self,value):
        return (self.__hour+value.__hour,self.__minute+value.__minute,self.__second+value.__second)
print("time1")
t1=time()
print("time2")
t2=time()
h,m,s=t1+t2
print("sum of time1 & time2 is:",h,'hour',m,'minute',s,'second')
