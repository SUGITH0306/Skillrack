nivi = input()
nivi= list(nivi)
swe= input()
swe= list(swe)
j = 0
for i in range(int(len(nivi)/2)-4,len(nivi)):
        for k in range(0,len(swe)):
            if j>=len(swe):
                break
            elif nivi[i] != swe[j]:
                break
            elif(nivi[i] == swe[j]):
                print(swe[j],end="")
            j+=1

Example Input/Output 1:
Input:
mayday
daybreak
Output:
day
Example Input/Output 2:
Input:
bridge
gear
Output:
ge
