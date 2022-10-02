newlist=[]
def capitalize_first (l):
    global newlist
    if len(l)==0:
        return newlist
    else:
        newlist.append(l[0][0].upper()+l[0][1:])
        return capitalize_first(l[1:])
print(capitalize_first(['car', 'taco', 'banana']))
