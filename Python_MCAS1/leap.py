startyear=2021
lastyear=int(input("enter the last year"))
print("list of leap years :")
for year in range(startyear,lastyear):
    if(0==year%4)and(0!=year%100)or(0==year%400):
        print(year)
