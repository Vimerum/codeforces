gems = {"purple": "Power", "green": "Time", "blue": "Space", "orange": "Soul", "red": "Reality", "yellow": "Mind"}

n = int(input())

for i in range(n):
	color = input()
		del gems[color]

		print("%d" % (len(gems)))

		for key,value in gems.items():
			print(value)
