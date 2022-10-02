new_list=[]
def flatten_list(l):
    global new_list
    for i in range(len(l)):
        if type(l[i])==list:
            flatten_list(l[i])
        else:
            new_list.append(l[i])
    return new_list
print(flatten_list([[[[1], [[[2]]], [[[[[[[3]]]]]]]]]]))
