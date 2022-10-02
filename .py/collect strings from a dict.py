def collectStrings(obj,l=[]):
    for i in obj:
        if type(obj[i])==str:
            l.append(obj[i])
        elif type(obj[i]==dict):
            collectStrings(obj[i])
    return l
obj={'stuff': 'foo', 'data': {'val': {'thing': {'info': 'bar', 'moreInfo': {'evenMoreInfo': {'weMadeIt': 'baz'}}}}}}

print(collectStrings(obj)) # ['foo', 'bar', 'baz'])
