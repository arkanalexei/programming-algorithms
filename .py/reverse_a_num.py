def reverse_a_num(n):
    if n==0:
        return 
    else:
        print(n%10)
        reverse_a_num(n//10)
num=int(input())
reverse_a_num(num)
    
