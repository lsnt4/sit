class W6() :
	def __init__(self) :
		pass

	def ex1(self):
		
		number = 1
		while (number <= 100) :
			if (number%2 == 0) :
				print "%d"%(number)
			number += 1

	def ex2(self) :
		count = 0
		total = 0

		grade = input("Input grade: ")

		while ( grade != -1 ) :
			total = total + grade
			count = count + 1
			grade = input("Input grade: ")

		average = total / count
		print "%.2f"%(average)

	def ex3(self) :
		sum = 0
                total = 0
		for sum in range(0, 10) :
			total = total + sum

		print "%d"%(total)

lab = W6()
#lab.ex1()
#lab.ex2()
lab.ex3()
