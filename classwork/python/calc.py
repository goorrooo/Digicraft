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
 ave = input("Add/View/Search/Delete/Update/Exit " "\n")
 value = []
 if ave == "Add":
   name = input("Input name: " "\n")
   num = int(input("Input phone: " "\n"))
   value.append(num)
   contacts[name] = value
 elif ave == "View":
   print(contacts)
 elif ave == "Search":
   src = input("Input Name contact: " "\n")
   name = src
   print(contacts[name])
 elif ave == "Delete":
   dlt = input("Input name contact: " "\n")
   name = dlt
   del contacts[name]
 elif ave == "Update":
   upn = input("Input name for update: " "\n")
   name = upn
   contacts[name] = None
   upv = int(input("Input number: " "\n"))
   value = [upv]
   contacts[name] = value  
      
 elif ave == "Exit":
   print("Exit programm")
   break
 else:
   print("Unknown")
      









































