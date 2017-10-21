p = 19
q = 29
phi = (p - 1) * (q - 1)

ekey = 5
dkey = 101

def Crypt(m, key, mod):
  return (pow(m, key, mod))
  

for i in range(0, p*q-1):
  
  print("Let's encrypt ", i, ": ")
  x = Crypt(i, 5, p*q)
  #print("E: ", x)
  y = Crypt(x, 101, p*q)
  #print("D: ", y)
  
  if(i != y):
    print(x, " could not be encrypted properly")
  else:
    print(i, " was perfectly encrypted!")
