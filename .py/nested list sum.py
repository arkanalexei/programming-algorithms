def sum_of_list(l):
    sum=0
    for i in l:
        if type(i) ==list:
            sum+=sum_of_list(i)
        else:
            sum+=i
    return sum
lis= [1, 2, [3,4], [5,6]]
print(sum_of_list(lis))
