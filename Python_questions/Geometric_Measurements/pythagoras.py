import math
# Given 2 sides of a right-angle triangle, find the 3rd
a, b = input("Enter the base and the height of the triangle: ").split()
a = int(a)
b = int(b)
c = math.sqrt((a*a) + (b*b)) 
print(c)
