vehicleType = raw_input("Car (c) or Van (v): ")
distance = input("Distance? ")

class Taxi :
	def __init__(self, vehicleType, distance) :
		self.vehicleType = vehicleType
		self.distance = distance

	def vehicle(self):
		if (self.vehicleType == 'c'):
			first25km = 25.50
			second25km = 50.00
		elif (self.vehicleType == 'v'):
			first25km = 35.5
			second25km = 55.00
		else :
			print "Invalid vehicle type"
			return

		if (self.distance <= 25) :
			cost = self.distance * first25km
			print "Your total cost is: %.2f"%(cost)
		else :
			self.distance -= 25
			cost = self.distance * second25km + first25km * 25
			print "Your total cost is: %.2f"%(cost)


hire = Taxi(vehicleType, distance)
hire.vehicle()