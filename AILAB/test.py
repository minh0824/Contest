def snt(x):
  for i in range(2, x):
    if (x%i==0): return False
  return x>1

print(snt(5))

hello
