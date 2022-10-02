newlist=[]
def capitalize_word (l):
    global newlist
    if len(l)==0:
        return newlist
    else:
        newlist.append(l[0].upper())
        return capitalize_word(l[1:])
print(capitalize_word(['car', 'taco', 'banana']))
