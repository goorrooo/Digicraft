#Function 
word = "Digicraft"
print(word.count('i'))
print(word.upper()) # print text upper 
print(word.isupper()) # test uppercase or not (value - true or false)
print(word.islower()) # test lower : or not (value - true or false)
print(word.find('c')) # Search symbol (index)
name = "Gor, vahan, areg, mihran"
print(name.split(',')) # sarqel list(bajanel maseri yst symboli ',:')
names = name.split(', ')
print(names[0]) # print names in index

for i in range(len(names)):      # Uppercase 1 symbol names 
 names[i] = names[i].capitalize()

result = ", ".join(names)
print(result)
print(names[2:-1])
