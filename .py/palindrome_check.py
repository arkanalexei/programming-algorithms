def Palindrome_check(s):
    if len(s)<1:
        return True
    elif s[0]!=s[-1]:
        return False
    else:
        return Palindrome_check(s[1:-1])
s=input()

print(Palindrome_check(s))
