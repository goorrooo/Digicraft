class Person:
  def __init__(self, name, age):
        self._name = name
        self._age = age
  def sayHello(self):
      print(f"Hello {self._name}")

class Student(Person):
   def __init__(self, name, age, grade):
       super().__init__(name,age)
       self._grade = grade
   def sayHello(self):
       print(f"Hello {self._name} {self._age} {self.__grade}")

class Worker:
   def __init__(self, iid, name, age):
       self._iid = iid
       self._name = name
       self._age = age     
   def setId(self,iid):
           self._iid = iid
   def getIid(self):
           return self._iid
   def setName(self,name):
           self._name = name
   def getName(self):
           return self._name
   def setAge(self,age):
           self._age = age
   def getAge(self):
           return self._age

class Employee(Worker):
      def __init__(self, iid, name, age, salary):
          super().__init__(iid, name, age)
          self._salary = salary 
      def setSalary(self,salary):
          self._salary = salary
      def getSalary(self):
          return self._salary
      def printInfo(self):
          print(f"Hello! My name: {self._name} My id: {self._iid} My age: {self._age} My salary: {self._salary} My position: ")
emp = Employee("Gor", 777, 21, 13020)


class Programmer(Employee):
     def __init__(self, iid, name, age, salary, pos):
       super().__init__(iid,name,age,salary)
       self._pos = pos
     def setPos(self,pos):
       self._position = pos
     def getPos(self):
       return self._pos
     def printInfo(self):
         print(f"Hello! My name: {self._name} My id: {self._iid} My age: {self._age} My salary: {self._salary} My position: {self._pos}")
pr = Programmer("Gor", 0, 21, 130000, "Middle")
pr.printInfo()


