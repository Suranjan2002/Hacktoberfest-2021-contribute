# You're given an integer N. Write a program to check whether the integer is EVEN or ODD.

# number of test cases
t = int(input())

for _ in range(t):
	# input the number
	n = int(input())

	# check whether even or odd
	if (n%2 == 0):
		print("Even")
	else:
		print("Odd")