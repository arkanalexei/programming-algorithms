#Program for linear search 

def check(arr,value):
    for i in arr:
        if i==value:
            return True 
    return False 

arr=[1,2,3,4,5,6]
value=6 
print(check(arr,value)) #if check is equal to True means the value is present in arr else False is printed!