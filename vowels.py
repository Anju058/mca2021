input_string=input("enter a word:\n")
input_string=input_string.casefold()
vowels="aeiou"
data={}.fromkeys(vowels,0)
for character in input_string:
    if character in vowels:
        data[character]+=1
for vowel in data:
    print(vowel,"=>",data[vowel])
        
