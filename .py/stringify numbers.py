def stringifyNumbers(obj):
    for i in obj:
        if type(obj[i])==int:
            obj[i]==str(obj[i])
        elif type(obj[i])==dict:
            stringifyNumbers(obj[i])
    return obj
obj = {'num': 1, 'test': [], 'data': {'val': 4, 'info': {'isRight': True, 'random': 66}}}
print(stringifyNumbers(obj))
