# While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
# If the quantity and price per item are input, write a program to calculate the total expenses.

# number of test cases
t = int(input())

for _ in range(t):
	# input quantity and price from user
	quantity, price = map(int, input().split())

	# if quantity is more than 1000
	if (quantity > 1000):
		# discount of 10%
		price = price - (price/10)

	total_price = quantity*price

	print(total_price)