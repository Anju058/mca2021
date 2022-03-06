y={'carl':40,'alan':2,'bob':1,'danny':3}
l=list(y.items())
print("dictionary",y)
l.sort()
print('ascending order is',dict(l))
l.sort(reverse=True)
print('descending order is',dict(l))
