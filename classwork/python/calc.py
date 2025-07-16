import random
"""
x = int(input("Input num: "))
y = int(input("Input num: "))
z = input("Input operator: ")
def calculate(x,y,z):
  if z == "+":
   return x+y
  elif z == "-":
   return x-y
  elif z == "/":
   return x/y
  elif z == "*":
   return x*y
  else:
   print("Error")

print(calculate(x,y,z))

while w != goldNum:
 if w == goldNum : 
  print(f"Whoala: {w} ", goldNum)
 else:
  print("Chkpav")  


goldNum = random.randint(1,10)
while True:
 w = int(input("input goldNum: "))
 if w == goldNum:
   print(f"Whoala {w}=={goldNum}")
   break
 elif w>10 or w<1:
   print("Input num 1-10")
 else:
   print("Chkpav") 

myday = []
while True:
 ave = input("Input Add/View/Exit: ")
 if ave == "Add":
  info = input()
  myday.append(info)
 elif ave == "View":
  print(myday)
 elif ave == "Exit":
  break
 else:
     print("Error")
"""

contacts = dict({})

while True:
 ave = input("Add/View/Search/Delete/Exit")
 if ave == "Add":
   name = input("Input name: ")
   value = int(input("Input phone: "))
   contacts.append(name)
   contacts.append(value)
 elif ave == "View":
   print(contacts)
 elif ave == "Search":
   print   










































