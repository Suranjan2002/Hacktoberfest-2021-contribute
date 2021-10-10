# take input from the user
N=int(input())
while N!=0:
   num = input("Enter a number: ")
   dig=len(num)
   nums=list(map(int,num))

   # initialize empty list sum1
   sum1 = []
   for i in range(len(nums)):
      t= nums[i] ** dig
      sum1.append(t)

   # display the result
   if int(num) == sum(sum1):
      print(num,"is an Armstrong number")
   else:
      print(num,"is not an Armstrong number")

   N=N-1



