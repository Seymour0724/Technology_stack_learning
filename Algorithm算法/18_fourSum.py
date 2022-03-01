def fourSum(li,target):
    if len(li)<4 and len(set(li))<4: return []
    res = []
    for a in range(len(li)):
        for b in range(a+1,len(li)):
            for c in range(a+b+2,len(li)):
                for d in range(a+b+c+3,len(li)):
                    if li[a]+li[b]+li[c]+li[d]==target:
                        res.append([li[a],li[b],li[c],li[d]])
    return res

if __name__ == "__main__":
    nums = [1,0,-1,0,-2,2]
    target = 0
    print(fourSum(nums,target))