import math

a, b = input().split()
a = int(a)
b = int(b)

xa = math.log(a) / a
xb = math.log(b) / b
if xa > xb:
	print(">")
	elif xb > xa:
		print("<")
		else:
			print("=")
