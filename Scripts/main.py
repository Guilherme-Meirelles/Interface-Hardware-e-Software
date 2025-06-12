# A recursive fibonacci function.
def fib(n):
  if n < 2:
    return n
  return fib(n-1) + fib(n-2)

# Prints all fibonacci from 0 to 10 exclusive.
for i in range(10):
  print(f"fib({i}) = {fib(i)}")
