class Student:

    def __init__(self, name, roll_no, phone_no, address) -> None:
        self.name = name
        self.roll_no = roll_no
        self.phone_no = phone_no
        self.address = address


stud1 = Student("john", 2, "+254 099 4213", "Eldoret")
stud2 = Student("Sam", 4, "+254 583 7490", "Nairobi")
print(stud1.name, "phone no: ", stud1.phone_no)
print('\t\t', "roll no: ", stud1.roll_no)
print('\t\t', "address", stud1.address)

print(stud2.name, "phone no: ", stud2.phone_no)
print('\t\t', "roll no: ", stud2.roll_no)
print('\t\t', "address", stud2.address)
