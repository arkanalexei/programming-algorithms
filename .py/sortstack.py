##This problem sorts the given stack using another satck
##Sort a stack using temporary stack
def sortStack(stack):
    tempStack=createStack()
    while isEmpty(stack)==False:
        temp=top(stack)
        pop(stack)
        while isEmpty(tempStack)==False and int(top(tempStack))>int(temp):
            push(stack,top(tempStack))
            pop(tempStack)
        push(tempStack,temp)
    return tempStack

def createStack():
    stack=[]
    return stack
def isEmpty(stack):
    return len(stack)==0
def push(stack,item):
    stack.append(item)
def pop(stack):
    if isEmpty(stack):
        print("Underflow")
        exit()
    return stack.pop()
def top(stack):
    p=len(stack)
    return stack[p-1]
def prints(stack):
    for i in range(0,len(stack)):
        print(stack[i],end=' ')
    print()
#driver code
stack=createStack()
push( stack, str(34) )
push( stack, str(3) )
push( stack, str(31) )
push( stack, str(98) )
push( stack, str(92) )
push( stack, str(23) )
print("Original Stack:")
prints(stack)
print("Sorted Stack:")
prints(sortStack(stack))
