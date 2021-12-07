def maxPoints(points):
    import math
    #边界条件先判断好
    if len(points)<=2: return len(points)
    res = 0
    equation = []  #这里存储直线方程
    slow,fast = 0,0
    while slow<len(points)-1:
        fast = slow+1
        while fast<len(points):
            x1, x2 ,y1, y2 = points[slow][0], points[fast][0], points[slow][1], points[fast][1]
            if x1-x2==0:
                slope = float("inf")
                equation.append([(slope,slope),(x1,x1)])
            else:
                #这里要用分数思想处理斜率
                slope = (y1-y2,x1-x2)
                intercept_info = (y1,x1)
                equation.append([slope,intercept_info])
            fast += 1
        slow += 1
    for equa in equation:
        a1,a2 = equa[0][0],equa[0][1]
        b1,b2 = equa[1][0],equa[1][1]
        if math.isinf(a1):
            experssion = lambda x,y: x==b1
        else:
            experssion = lambda x,y: y==(a1*(x-b2))/a2+b1
        max = 0
        for point in points:
            x = point[0]
            y = point[1]
            if experssion(x,y)==True:
                max+=1
        if max>res: res=max
    return res

if __name__ == "__main__":
    points =[[-6,-1],[3,1],[12,3]]
    print(maxPoints(points))