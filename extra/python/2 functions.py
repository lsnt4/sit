def dog(name, trick):
	print "Your dog, '%s' can do the '%s' trick"%(name, trick)

dn = raw_input('Dog\'s name: ')
dt = raw_input('His fav trick? (Ex: Play dead): ')

dog(dn, dt)