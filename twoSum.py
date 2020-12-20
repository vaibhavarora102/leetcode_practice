class Solution:
    def twoSum(l,li, target):
        m=[]
        for i in range(len(li)-1):
            for j in range(i+1,len(li)):
                if (li[i]+li[j])== int(target):
                    m.append(i)
                    m.append(j)
                    return m
            
        return m
   