"""arr = [1,2,3,4,"a","b","c"]
arr.append("d") --- Append
arr[2] = 1

for i in arr:   ----- print arr[element]
	print(i)
print(len(arr))

mytuple = [(1,2),(3,4)]      ------ packing
mytuple.append((5,6)) 
print(mytuple[2])

for x,y, in mytuple: -------- unpacking
	print(x)
	print(y)

num = {1,2,3}  ------ 1 type, no-dublicate

         """
x = {1,2,3}
y = {3,5,6}

print(x-y)
print(x&y)
print(x|y)

student = {"name" : "Gor", "Age" : 21} 
print(student["name"])
student["name"] = "Goro"
student["city"] = "Erevan"
for key,value in student.items():
	print(key,": ",value)
