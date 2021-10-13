# Sum of natural numbers up to num

num = 16

if num < 0:
    print("Enter a positive number")
elif not isinstance(num, int):
    print("Enter an integer")
else:
    sum = 0
    # use while loop to iterate until zero
    while(num > 0):
        sum += num
        num -= 1
    print("The sum is", sum)
