# to find the smallest and the largest elements
"""take the input as a list"""
numbers = input("Enter some numbers: ").split()

"""from the list you have taken convert them to integers"""
for i in range(0, len(numbers)):
    numbers[i] = int(numbers[i])

"""Sort the numbers from smallest to largest"""
numbers = sorted(numbers)

"""print the largest and smallest numbers"""
print(f' largest number: {numbers[-1]} and the smallest number: {numbers[0]}')
