user = int(input("Input students: "))
avg = 0
def StudentScore(score): 
  if score > 50:
   print("Pass is Student: ", name)
  elif score < 50:
   print("Fail is Student: ", name)
  else:
   print("Error -> Input number")
for i in range(user):
  name = input("Input your name: ")
  score = int(input("Input your score: "))
  avg += score
  StudentScore(score)

result = avg/user
print(result)
