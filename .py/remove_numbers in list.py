#To remove elements having value >=500 from list below 

cart = [ 50,60,800,700,10]
c=0
for num in cart:
        if (num>500):
            c+=1
def remove(cart):
    for i in range(len(cart)-1):
        if (cart[i]>500):
            cart.pop(i)
            break
for i in range(0,c):
    remove(cart)
print(cart)
