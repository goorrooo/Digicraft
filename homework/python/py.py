import sys
"""
for i in range(5):
 data = input("Input Info: ")
 file = open('text.py','a')
 file.write(data + "\n")
file.close() """
try:
 x = int(input())
 if x%2 == 0:
  print("Int")
 elif  x%2 != 0:
  print("float")
except:
 print("String")
print(sys.getsizeof(x))
