name = raw_input("Your name: ")
age = input("Your age: ")
gender = raw_input("Male or Female: ")

if (len(name) == 0) :
	print "You've not entered your name correctly"
elif (len(str(age)) == 0) :
	print "You've not entered your age correctly"
elif (len(gender) == 0) :
	print "You've not entered your gender correctly"
else :
	print "Your name is %s and your age is %d. You're a %s"%(name,age,gender)