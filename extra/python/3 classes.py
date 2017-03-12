class Calc:
	def __init__(self, n1, n2):
		self.n1 = n1
		self.n2 = n2

	def sum(self):
		print self.n1 + self.n2

	def sub(self):
		print self.n1 - self.n2

	def mul(self):
		print self.n1 * self.n2

	def div(self):
		print self.n1 / self.n2

c1 = Calc(1.23,4.56)

c1.sum()
c1.sub()
c1.mul()
c1.div()
