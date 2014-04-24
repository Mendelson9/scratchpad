doubleme x = x + x
doubleus x y = doubleme x + doubleme y
doubleSmallNumber x = if x > 100
	then x
	else x*2
