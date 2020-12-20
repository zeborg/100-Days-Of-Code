def gcd(x, y):
   while(y):
       x, y = y, x % y
   return x

def lcm(x, y):
   res = (x*y)//gcd(x,y)
   return res

cases = int(input())

while cases:
  num = int(input())
  k = []
  
  for i in str(num):
    if i!='0' and i not in k:
      k.append(int(i))
      
  num1=k[0]
  try:
    num2=k[1]
  except:
    num2=1
  
  LCM = lcm(num1,num2)
  
  if len(str(num))>2:
    for i in range(2,len(k)):
      LCM = lcm(LCM,k[i])
  
  while num%LCM:
    num+=1
    k = []
  
    for i in str(num):
      if i!='0' and i not in k:
        k.append(int(i))
        
    num1=k[0]
    try:
      num2=k[1]
    except:
      num2=1
    
    LCM = lcm(num1,num2)
    
    if len(str(num))>2:
      for i in range(2,len(k)):
        LCM = lcm(LCM,k[i])
  
  print(num)
  cases-=1
