import math

mapper = {}


def fun(n,mapper):
	if isPrime(n,mapper)==True:

		for a in [int(d) for d in str(n)]:
			if a not in mapper:
				return False

		return True


def isPrime(n,mapper):
	sqr = math.sqrt(n)
	for key in mapper:
		if key > sqr+1 :
			mapper[n]=1
			return True
		if n % key == 0:
			return False

	mapper[n]=1
	return True


if __name__ == "__main__":

	n = raw_input("Enter a number :")

	for a in range(2,int(n)):
		if fun(a,mapper)==True:
			print a
