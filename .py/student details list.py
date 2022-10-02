def nested_list(name, rollno,marks):
  li=[name, rollno,marks]
  return li
n=int(input())
stlist=[]
for i in range(n):
  name=input()
  rollno=int(input())
  marks1,marks2,marks3=input().split()
  marks=[int(marks1),int(marks2),int(marks3)]
  nested_list(name, rollno,marks)
  stlist.append((nested_list(name, rollno,marks)))
print(stlist)
