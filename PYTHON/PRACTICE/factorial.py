n=int(input("Enter A Number"));

fact=1;
for i in range(1,n+1):
    fact*=i;
    i+=1;
print("factorial of",fact);